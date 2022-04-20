#include<bits/stdc++.h>
#include<iostream>
#include "Node_intro_LL.cpp"
using namespace std;
Node* takeInput() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while (data != -1) {
		Node *newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
bool comparelist(Node *head1, Node *head2) {
	Node *temp1 = head1;
	Node *temp2 = head2;
	while (temp1 && temp2) {
		if (temp1->data == temp2->data) {
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else
			return 0;
	}
	if (temp1 == NULL && temp2 == NULL)
		return 1;
	return 0;
}
Node* ReverseLL(Node*&head_ref) {
	Node *p = NULL;
	Node *c = head_ref;
	Node*n;
	while (c != NULL) {
		next = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	*head_ref = p;
	return head_ref;
}
bool palindrome(Node*&head) {
	Node *slow = head;
	Node *fast = head;
	Node *secondhalf;
	Node *prev_slow_ptr = head;
	Node *midnode = NULL;
	bool res = true;
	if (head != NULL && head->next != NULL) {
		while (fast != NULL && fast->next != NULL) {
			fast = fast->next->next;
			prev_slow_ptr = slow;
			slow = slow->next;
		}
		if (fast != NULL) {
			midnode = slow;
			slow = slow->next;
		}
		secondhalf = slow;
		prev_slow_ptr->next = NULL;
		ReverseLL(*&secondhalf);
		res = comparelist(head, secondhalf);
		ReverseLL(*&secondhalf);
		if (midnode != NULL) {
			prev_slow_ptr->next = midnode;
			midnode->next = secondhalf;
		}
		else {
			prev_slow_ptr->next = secondhalf;
		}
	}
	return res;

}


void print(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head ->next;

	}
}
int main() {
	Node *head = takeInput();
	print(head);
	palindrome(head);
	print(head);
	return 0;
}