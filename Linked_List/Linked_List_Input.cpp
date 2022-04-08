#include<bits/stdc++.h>
#include<iostream>
#include "Node_intro_LL.cpp"
using namespace std;
Node* TakeInput() {
	int data;
	cin >> data;
	Node *head = NULL;
	while (data != -1) {
		Node *newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
		}
		else {
			Node *temp = head;
			while (temp -> next != NULL) {
				temp = temp->next;
			}
			temp->next = newNode;
		}
		cin >> data;
	}
	return head;
}
void print(Node *head) {
	//Always create a temp variable
	//Node *temp=head;
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}
int main() {


	Node *head = TakeInput();
	print(head);


	return 0;
}