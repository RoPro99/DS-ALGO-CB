#include<bits/stdc++.h>
#include<iostream>
#include "Node_intro_LL.cpp"
using namespace std;
void Display(Node *head){
Node *temp = head;
while(temp!=NULL){
	cout<<temp->data<<" ";
	temp = temp ->next;
}
}
int main(){
	Node *n1 = new Node(10);
	Node *head = n1;
	Node *n2 = new Node(20);
	Node *n3 = new Node(30);
	Node *n4 = new Node(40);
	Node *n5 = new Node(50);
	//Connecting Nodes

	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;

	Display(head);
	cout<<endl;
	Display(head);



	return 0;
}