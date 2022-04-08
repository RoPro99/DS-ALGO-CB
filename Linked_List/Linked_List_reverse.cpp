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
void ReverseLL(Node*&head) {
	//make a current pointer
	Node *C = head;
	//make a prev and give value null
	Node *P = NULL;
	Node *N;
	while (C != NULL) {
		//save the next node
		N = C->next;
		//make current node point to prev
		C->next = P;
		//update P and C and take them One step forward
		P = C;
		C = N;
	}
	head = P;
}
void Display(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}
int main() {
	Node *head = takeinput();

	ReverseLL(head);
	Display(head);

	return 0;
}