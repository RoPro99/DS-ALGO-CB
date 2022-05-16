#include<bits/stdc++.h>
#include<iostream>
#include "Tree_Node_Class.h"
using namespace std;
TreeNode<int>*TakeInput() {
	int rd;
	cout << "Enter Root Data" << endl;
	cin >> rd;
	TreeNode<int>*root = new TreeNode<int>(rd);
	int n;
	cout << "Enter the Children-" << rd << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		TreeNode<int>*child = TakeInput();
		root->children.push_back(child);
	}
	return root;
}
/*count the number of nodes present*/
int numNodes(TreeNode<int>*root) {
	int ans = 1;
	for (int i = 0; i < root->children.size(); i++) {
		ans += numNodes(root->children[i]);
	}
	return ans;
}
void printtree(TreeNode<int>*root) {
	//base case
	if (root == NULL) {
		return;
	}
	//Recursive case
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
	TreeNode<int>*root = TakeInput();

	printtree(root);
	cout << "Total number of nodes " << numNodes(root) << endl;
	printtree(root);


	return 0;
}