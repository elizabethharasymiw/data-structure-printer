#define CATCH_CONFIG_MAIN

#include "catch_amalgamated.hpp"
#include "list.hpp"

TEST_CASE("1: List Node Value Test", "[list]"){
    ListNode myListNode1(1);
    REQUIRE(myListNode1.val == 1);
}