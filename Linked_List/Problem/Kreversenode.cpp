#include<bits/stdc++.h>
#include<cstddef>
#include<iostream>

using namespace std;
class Node {
public:
	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		next = NULL;
	}

};
Node* takeinput(int n) {


	int data;
	cin >> data;

	Node *head = NULL;
	Node *tail = NULL;
	while (n > 0) {
		Node *newNode = new Node(data);
		n--;
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		if (n == 0) {
			break;
		}
		cin >> data;

	}
	return head;
}
Node* kreverse(Node *head, int k) {
	//base case
	if (!head) {
		return NULL;
	}
	///step intialize four variable
	Node *current = head;
	Node *next = NULL;
	Node *prev = NULL;
	int cnt = 0;
	while (current != NULL and cnt < k) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		cnt++;
	}
	if (next != NULL) {
		head->next = kreverse(next, k);
	}
	return prev;
}
void print(Node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head ->next;
	}
}

int main() {
	int n;
	cin >> n;

	int k;
	cin >> k;
	Node *head = takeinput(n);

	head = kreverse(head, k);
	print(head);

	return 0;
}