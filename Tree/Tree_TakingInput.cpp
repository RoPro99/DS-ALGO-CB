#include<bits/stdc++.h>
#include<iostream>
#include "Tree_Node_Class.h"
using namespace std;
TreeNode<int> * Takeinput() {
	int rootdata;
	cout << "Enter The Root Data" << endl;
	cin >> rootdata;
	TreeNode<int> *root = new TreeNode<int>(rootdata);
	int n;
	cout << "Enter Total Num Children-" << rootdata << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		TreeNode<int> *child = Takeinput();
		root->children.push_back(child);
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
	TreeNode<int> *root = Takeinput();
	printtree(root);

	return 0;
}