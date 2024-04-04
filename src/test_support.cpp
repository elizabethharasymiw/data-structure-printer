#include <iostream>
#include <sstream>

#include "test_support.hpp"

std::string stringWrittentToStream(std::function<void()> myFunction,
                                   std::ostream &myOut) {
    AutoRestoreRdbuf restore{myOut};
    std::ostringstream oss;
    std::cout.rdbuf(oss.rdbuf());
    myFunction();
    return oss.str();
}