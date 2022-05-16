#include<bits/stdc++.h>
#include<iostream>
#include "Tree_Node_Class.h"
using namespace std;

void printtree(TreeNode<int>*root) {
	//Base Case
	if (root == NULL) {
		return;
	}
	//recursive case
	cout << root->data << ":";
	for (int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for (int i = 0; i < root->children.size(); i++) {
		printtree(root->children[i]);
	}
}
int main() {
	TreeNode<int> * root = new TreeNode<int>(1);
	TreeNode<int> * node1 = new TreeNode<int>(2);
	TreeNode<int> * node2 = new TreeNode<int>(3);
	TreeNode<int> * node3 = new TreeNode<int>(4);
	//To connect this Node we create
	root->children.push_back(node1);
	root->children.push_back(node2);
	root->children.push_back(node3);
	printtree(root);
	return 0;
}