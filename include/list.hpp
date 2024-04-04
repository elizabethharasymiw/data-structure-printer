/**
 * @file list.hpp
 * @brief Implementations of classes, structs, and functions for linked lists
 */

#ifndef LIST_HEADER_FILE_HPP
#define LIST_HEADER_FILE_HPP

#include <iostream>

/**
 * @brief LeetCode C++ implementation of a singly-linked list node
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printLinkedList(ListNode *head);
ListNode *reverseList(ListNode *head);

#endif // LIST_HEADER_FILE_HPP