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
Node* MidPoint(Node *head) {
	if (head == NULL or head->next == NULL) {
		return head;
	}
	//start slow in head
	Node *slow = head;
	//start fast from head-next
	Node *fast = head->next;
	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
void Display(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head -> next;
	}
}
int main() {
	Node *head = takeInput();
	Node *mid = MidPoint(head);
	cout << mid->data << endl;


	return 0;
}