#include<bits/stdc++.h>
#include<iostream>
#include "Tree_Node_Class.h"
using namespace std;
TreeNode<int> *Takeinput() {
	int rootData;
	cout << "Enter a root data" << endl;
	cin >> rootData;
	TreeNode<int> *root = new TreeNode<int>(rootData);

	int n;
	cout << "Enter total children-" << rootData << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		TreeNode<int> * child = Takeinput(); //here a i get 2 and 3
		root->children.push_back(child);//connect root and child
	}
	return root;
}

void printtree(TreeNode<int> * root) {
	//Base case
	if (root == NULL) {
		return;
	}
	cout << root->data << ":";//print first root 1//1:
	for (int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << ","; //1:2,3//Basically tells that 1 is parent and 2,3 ara child
	}
	cout << endl;
	for (int i = 0; i < root->children.size(); i++) {
		printtree(root->children[i]);//here we print and connect 2 and 3
	}
}
int main() {
	// TreeNode<int> *root = new TreeNode<int>(1);
	// TreeNode<int> *node1 = new TreeNode<int>(2);
	// TreeNode<int> *node2 = new TreeNode<int>(3);
	// //To connect node to root
	// root->children.push_back(node1);
	// root->children.push_back(node2);
	TreeNode<int>* root = Takeinput();
	printtree(root);
	//TODO Delete the tree

	return 0;
}