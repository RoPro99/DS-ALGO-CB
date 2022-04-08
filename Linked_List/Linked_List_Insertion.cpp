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
Node* insertNode(Node *head, int i, int data) {
	Node *newNode = new Node(data);///Here We get address 200 assume
	int cnt = 0;
	Node *temp = head;
	if (i == 0) {
		newNode->next = head;
		head = newNode;
		return head;
	}
	while (temp != NULL && cnt < i - 1) {
		temp = temp->next; //To Stop The Node in iTH position
		cnt++;
	}
	if (temp != NULL) {
		Node *a = temp->next;///take next node ie 300
		temp->next = newNode; //store new value in it
		newNode->next = a; //to attach the 300 to newNode

	}
	return head;
}

void print(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}
int main() {
	Node *head = takeInput();
	print(head);
	int i, data;
	cin >> i;
	cin >> data;
	head = insertNode(head, i, data);
	print(head);

	return 0;
}

