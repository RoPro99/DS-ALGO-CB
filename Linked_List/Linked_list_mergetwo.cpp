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
	if (a->data <= b->data) {
		c = a;
		c->next = MergeTwo(a->next, b);
	}
	else {
		c = b;
		c->next = MergeTwo(a, b->next);
	}
	return c;
}



void Display(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

int main() {
	Node *head = takeInput();
	Node *head2 = takeInput();
	Node *newhead = MergeTwo(head, head2);
	//cout << newhead << endl;
	Display(newhead);
	return 0;
}