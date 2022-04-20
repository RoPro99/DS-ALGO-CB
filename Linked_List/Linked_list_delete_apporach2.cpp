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
Node* DeleteNode(Node *head, int i) {
	//Node *newNode = new Node(data);///Here We get address 200 assume
	int cnt = 0;
	if (head == NULL) {
		return head;
	}
	if (i == 0) {
		return head->next;
	}
	Node *temp = head;
	while (temp != NULL && cnt < i - 1) {
		temp = temp->next;
		cnt++;
	}
	Node *a = temp->next;
	Node *b = a->next;
	temp->next = b;
	delete a;
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
	int i;
	cin >> i;

	head = DeleteNode(head, i);
	print(head);

	return 0;
}