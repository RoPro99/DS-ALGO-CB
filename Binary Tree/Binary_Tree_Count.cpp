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
node*buildtree() {
	int d;
	cin >> d;
	if (d == -1) {
		return NULL;
	}
	node*root = new node(d);
	root->left = buildtree();
	root->right = buildtree();
	return root;
}
int count(node*root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + count(root->left) + count(root->right);
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
	node* root = buildtree();
	cout << count(root) << endl;

	return 0;
}