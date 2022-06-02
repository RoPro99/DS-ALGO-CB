#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node {
public:
	int data;
	node*left;
	node*right;
	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};
//These Function accepts the old node and return the new node
node*insertBst(node*root, int data) {
	//if root is null create new data
	//base case
	if (root == NULL) {
		return new node(data);
	}
	//Recursive case- we inserted the subtree
	if (data <= root->data) {
		root->left = insertBst(root->left, data);
	}
	else {
		root->right = insertBst(root->right, data);
	}
	return root;
}
node* build() {
	//read list of number still -1 and these number is inserted inside BST
	int d;
	cin >> d;

	node*root = NULL;

	while (d != -1) {
		root = insertBst(root, d);
		cin >> d;
	}
	return root;
}
bool isBST(node *root, int Minv = INT_MIN, int MaxV = INT_MAX) {
	if (root == NULL) {
		return true;
	}
	if (root->data >= Minv && root->data <= MaxV && isBST(root->left, Minv, root->data) && isBST(root->right, root->data, MaxV)) {
		return true;
	}
	return false;
}
void inorder(node*root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
int main() {
	node * root = build();
	inorder(root);
	cout << endl;


	if (isBST(root)) {
		cout << "YES BST):";
	}
	else {
		cout << "NO BST:(";
	}


	return 0;
}