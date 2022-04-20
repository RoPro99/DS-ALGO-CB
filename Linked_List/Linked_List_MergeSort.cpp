#include<bits/stdc++.h>
#include<iostream>
#include "Node_intro_LL.cpp"
using namespace std;
Node* takeinput() {
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
Node* MidPoint(Node *head) {
	if (head == NULL or head->next == NULL) {
		return head;

	}
	Node *slow = head;
	Node *fast = head->next;
	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
Node* MergeTwo(Node *a, Node *b) {
	//base case
	if (a == NULL) {
		return b;
	}
	if (b == NULL) {
		return a;
	}
	//take a head pointer
	Node *c;
	if (a->data < b->data) {
		c = a;
		c->next = MergeTwo(a->next, b);
	}
	else {
		c = b;
		c->next = MergeTwo(a, b->next);
	}
	return c;
}
Node* mergesort(Node *head) {
//base case
	if (head == NULL or head->next == NULL ) {
		return head;
	}
	//Recursion case
	//1.--> break
	Node *mid = MidPoint(head);
	Node *a = head;
	Node *b = mid->next;
	mid->next = NULL;

	///2.--> sort the two parts
	a = mergesort(a);
	b = mergesort(b);
	///3.Merge them
	Node *c = MergeTwo(a, b);
	return c;
}
void Display(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

int main() {
	Node *head = takeinput();
	Node *head1 = mergesort(head);
	Display(head1);

	return 0;
}