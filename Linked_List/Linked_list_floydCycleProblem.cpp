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
		Node *newNode = new Node(data) ;
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
bool detectcycle(Node *head) {
	Node *slow = head;
	Node *fast = head;
	while (fast != NULL  && fast->next != NULL ) {
		slow = slow->next;
		fast = fast->next->next;

		if (fast == slow) {
			return true;
		}
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
	head->next->next->next->next->next = head->next->next;
	if (detectcycle(head)) {
		cout << "Cycle Found";
	}
	else {
		cout << "Not Found";
	}


	return 0;
}