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
Node *getNode(Node*&head, int data) {
	Node *temp = head;
//for all nodes except last nodes
	while (temp ->next != head) {
		if (temp->data == data) {
			return temp;
		}
		temp = temp -> next;
	}
//Out of the loop for last node
	if (temp->data == data) {
		return temp;
	}
	return NULL;
}
void deleteNode(Node*&head, int data) {
	Node *del = getNode(head, data) ;
	if (del == NULL) {
		return;
	}
//otherwise
	if (head == del) {
		head = head ->next;
	}
	Node *temp = head;
///stop one step behind node to be deleted
	while (temp->next != del) {
		temp = temp ->next;
	}
	temp ->next = del->next;
	delete del;
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
	insertcir(head, 5);
	insertcir(head, 4);
	insertcir(head, 3);
	insertcir(head, 2);
	insertcir(head, 1);
	print(head);
	cout << endl;
	deleteNode(head, 3);
	print(head);
	cout << endl;
	deleteNode(head, 4);
	print(head);
	return 0;
}