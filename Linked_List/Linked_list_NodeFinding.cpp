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
void nodelist(Node *head, int i) {
	Node *temp = head;
	int cnt = 0;
	while (temp != NULL && cnt < i - 1) {
		temp = temp->next;
		cnt++;
	}
	cout << cnt << " ";

}
void Display(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}
int main() {

	Node *head = takeinput();
	Display(head);
	int i;
	cin >> i;
	nodelist(head, i);


	return 0;
}