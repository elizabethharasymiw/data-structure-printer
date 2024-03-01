#ifndef LIST_HEADER_FILE_H
#define LIST_HEADER_FILE_H

#include <iostream>

// LeetCode Definition for singly-linked list
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Function to reverse a LinkedList ordering 
ListNode* reverseList(ListNode* head);

// Function to print a LinkedList in human readable way
void printLinkedList(ListNode* head);

#endif // LIST_HEADER_FILE_H