#define CATCH_CONFIG_MAIN

#include <iostream>
#include <sstream>

#include "catch_amalgamated.hpp"
#include "list.hpp"
#include "test_support.hpp"

// Testing function that just prints "foo" and a newline to the stdout
void printFoo() { std::cout << "foo" << std::endl; }

TEST_CASE("0: Print foo", "testtest") {
    auto s = stringWrittentToStream(&printFoo, std::cout);
    REQUIRE(s == "foo\n");
}

TEST_CASE("1: List Node Value Test", "[list]") {
    ListNode myListNode1(1);
    REQUIRE(myListNode1.val == 1);
}