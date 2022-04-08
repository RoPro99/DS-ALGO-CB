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
			tail = tail->next;///tail= newNode
		}
		cin >> data;

	}
	return head;
}
bool Searching(Node *head, int key) {
	Node *temp = head;
	while (temp != NULL) {
		if (head->data == key) {
			return true;
		}
		temp = temp->next;
	}

	return false;
}
void Display(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head -> next;
	}

}
int main() {
	Node *head = takeInput();

	Display(head);
	int key;
	cin >> key;
	if (Searching(head, key)) {
		cout << "Element found";
	}
	else {
		cout << "Not Found";
	}

	return 0;
}