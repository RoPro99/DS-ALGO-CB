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
}//breadth first search level by level
void bfs(node*root) {
	queue<node*> q;
	q.push(root);

	while (!q.empty()) {
		node* f = q.front();
		cout << f->data << ",";
		q.pop();

		if (f->left) {
			q.push(f->left);
		}
		if (f->right) {
			q.push(f->right);
		}
	}
	return;
}
//INorder print
void inorder(node*root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << ",";
	inorder(root->right);
}

int main() {
	node * root = build();
	inorder(root);
	cout << endl;
	bfs(root);

	return 0;
}