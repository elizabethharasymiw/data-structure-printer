#define CATCH_CONFIG_MAIN

#include <iostream>
#include <sstream>

#include "catch_amalgamated.hpp"
#include "list.hpp"


void foo(){
    std::cout << "foo" << std::endl;
}

class AutoRestoreRdbuf {
    std::ostream& out;
    std::streambuf* old;

    public:
        ~AutoRestoreRdbuf(){ out.rdbuf(old); }
        AutoRestoreRdbuf(const AutoRestoreRdbuf&) = delete;
        AutoRestoreRdbuf(AutoRestoreRdbuf&&) = delete;
        AutoRestoreRdbuf(std::ostream& out) : out { out }, old { out.rdbuf() } {}
};

std::string stringWrittentToStream(std::function<void()> myFunction, std::ostream& out = std::cout){
    AutoRestoreRdbuf restore { out };
    std::ostringstream oss;
    std::cout.rdbuf(oss.rdbuf());
    myFunction();
    return oss.str();
}

TEST_CASE("0: Foo", "testtest"){
    auto s = stringWrittentToStream(&foo);
    REQUIRE(s == "foo\n");
}
