#include<bits/stdc++.h>
#include<iostream>
#include "Node_intro_LL.cpp"
using namespace std;
void print(Node *head) {
	//Always create a temp variable
	//Node *temp=head;
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	// cout<<endl;
	// temp = head;
	// while(temp!=NULL){
	// 	cout<<temp->data<<" ";
	// 	temp = temp->next;
	// }
}
int main() {
	//Statically
	Node n1(1);
	Node *head = &n1;
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);
	//connecting node
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	///Calling the print function
	print(head);
	//Calling Print Twice To Print Twice
	cout << endl;
	print(head);
	return 0;
}