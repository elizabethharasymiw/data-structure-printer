/**
 * @file list.cpp
 * @brief Implementations of classes, structs, and functions for linked lists
 */

#include "list.hpp"

#include <iostream>

/**
 * @brief Function to print a LinkedList in human readable format
 * @param head The first node of a singly-linked list
 */
void printLinkedList(ListNode *head) {
    while (head != nullptr) {
        std::cout << "(" << head->val << ")"
                  << "->";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

/**
 * @brief Function to reverse a given LinkedList ordering
 * @param head The first node of a singly-linked list
 * @return The new first node of the modified singly-linked list
 */
ListNode *reverseList(ListNode *head) {

    ListNode *current = head;
    ListNode *backward = nullptr;
    ListNode *forward = nullptr;

    while (current != nullptr) {
        forward = current->next;  // Move forward up one
        current->next = backward; // Change current to point backwards
        backward = current;       // Move backward up one
        current = forward;        // Move current up one
    }

    return backward; // return new front of linked list
}