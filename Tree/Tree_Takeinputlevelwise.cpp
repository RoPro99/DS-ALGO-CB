#include<bits/stdc++.h>
#include<iostream>
#include "Tree_Node_Class.h"
using namespace std;
TreeNode<int>*TakeInputLevel() {
	int rootdata;
	cout << "Enter The Root Data " << endl;
	cin >> rootdata;
	TreeNode<int>*root = new TreeNode<int>(rootdata);
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while (pendingnodes.size() != 0) {
		TreeNode<int> * front = pendingnodes.front();
		pendingnodes.pop();//Remove Front in the Queue
		cout << "Enter The Num Children " << front->data << endl;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int n1;
			cout << "Enter" << i << " th child of " << front->data << endl;
			cin >> n1;
			TreeNode<int>*child = new TreeNode<int>(n1);
			front->children.push_back(child);
			pendingnodes.push(child);
		}
	}
	return root;
}






void printtree(TreeNode<int>*root) {
//base case
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
	TreeNode<int> *root = TakeInputLevel();
	printtree(root);

	return 0;
}