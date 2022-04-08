#include<bits/stdc++.h>
#include<iostream>
#include "Node_intro_LL.cpp"
using namespace std;
Node* TakeInputBetter(){
	int data;
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1){
		Node *newNode = new Node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}
		else{
			tail->next = newNode;
			tail = tail->next;
			/* or tail = newNode*/
		}
		cin>>data;
	}
	return head;
}
void print(Node *head){
	//Always create a temp variable
	//Node *temp=head;
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
}
int main(){
	Node *head = TakeInputBetter();
	print(head);
	
	return 0;
}