#include<bits/stdc++.h>
#include<iostream>
#include "Node_intro_LL.cpp"
using namespace std;
void insertcir(Node*&head, int data) {
	Node *n = new Node(data);
	Node *temp = head;
	n->next = head;
	//find tail
	if (temp != NULL) {
		while (temp->next != head) {
			temp = temp -> next;
		}
		temp->next = n;
	}
	else {
		n->next = n;
	}
	head = n;
}
void print(Node *head) {
	Node *temp = head;
	while (temp->next != head) {
		cout << temp->data << " ";
		temp = temp ->next;
	}
	cout << temp->data << " ";
	return;
}


int main() {
	Node *head = NULL;
	insertcir(head, 10);
	insertcir(head, 20);
	insertcir(head, 30);
	insertcir(head, 40);
	insertcir(head, 50);
	print(head);

	return 0;
}