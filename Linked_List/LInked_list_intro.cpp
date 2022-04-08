#include<bits/stdc++.h>
#include<iostream>
#include "Node_intro_LL.cpp"
using namespace std;
int main() {
	//create a object of class node
	//statically
	Node n1(1);
	Node *head = &n1; //Pointer Variable
	Node n2(1);
	n1.next = &n2; //TO connect the node
	cout << n1.data << " " << n2.data << " " << endl;

	//Let's See Dynamically
	Node *n3 = new Node(10);
	Node *head = n3;
	Node *n4 = new Node(20);
	n3 -> next = n4;//TO connect the node
	return 0;
}