#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node {
	int data;
	node *left;
	node*right;
	node(int d) {
		data = d;
		left = NULL;
		right = NULL;

	}
};
node* buildtree() {
	int d;
	cin >> d;
	if (d == -1) {
		return NULL;
	}
	node *root = new node(d);
	root->left = buildtree();
	root->right = buildtree();
	return root;
}
//to get height of tree
int heighttree(node*root) {
	if (root == NULL) {
		return 0;
	}
	int ls = heighttree(root->left);
	int rs = heighttree(root->right);
	return max(ls, rs) + 1;
}
void print(node*root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	print(root->left);
	print(root->right);
}
int main() {

	return 0;
}