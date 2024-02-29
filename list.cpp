#include "list.hpp"

#include <iostream>

ListNode* reverseList(ListNode* head) {

	ListNode* current = head;
	ListNode* backward = nullptr;
	ListNode* forward = nullptr;

	while(current != nullptr){
		forward = current->next;  // Move forward up one
		current->next = backward; // Change current to point backwards
		backward = current;       // Move backward up one
		current = forward;        // Move current up one
	}

	head = backward;
	return head;
}