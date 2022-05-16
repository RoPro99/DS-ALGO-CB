#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d)
	{	data = d;
		next = NULL;
	}

};



node* takeinput(int n) {


	int data;
	cin >> data;

	node *head = NULL;
	node *tail = NULL;
	while (n > 0) {
		node *newNode = new node(data);
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


void print(node* head)
{	node*temp = head;

	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->next;
		cout << " ";
	}
	cout << "\n";
}


node* appendK(node *head, int k) {
	if (k == 0) {
		return head;
	}
	node *oldHead = head;
	node *fast = head;
	node *slow = head;
	for (long i = 0; i < k && fast->next != NULL ; i++) {
		fast = fast->next;
	}
	while (fast->next != NULL && fast != NULL) {
		fast = fast->next;
		slow = slow->next;
	}
	node *newHead = slow->next;
	slow->next = NULL;
	fast->next = oldHead;
	return newHead;
}



int main()
{

	int n, m;
	cin >> n;
	node *head = takeinput(n);

	int k;
	cin >> k;
	k = k % n;
	head = appendK(head, k);
	print(head);

}