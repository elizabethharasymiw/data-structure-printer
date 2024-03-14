#define CATCH_CONFIG_MAIN

#include <functional>
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

TEST_CASE("2: Linked List Print Tests", "[list]") {

    // Manuel build example Linked List for testing
    ListNode myListNode1(1);
    ListNode myListNode2(2);
    ListNode myListNode3(3);
    myListNode1.next = &myListNode2;
    myListNode2.next = &myListNode3;

    SECTION("A: Print Linked List") {
        std::function<void()> func = std::bind(printLinkedList, &myListNode1);
        auto s = stringWrittentToStream(func, std::cout);
        REQUIRE(s == "(1)->(2)->(3)->nullptr\n");
    }

    SECTION("B: Print Reversed Linked List") {
        ListNode *revList = reverseList(&myListNode1);
        std::function<void()> func = std::bind(printLinkedList, revList);
        auto s = stringWrittentToStream(func, std::cout);
        REQUIRE(s == "(3)->(2)->(1)->nullptr\n");
    }
}
