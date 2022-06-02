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
bool search(node*root, int data) {
	if (root == NULL) {
		return false;
	}
	if (root->data == data) {
		return true;
	}
///recuesive for left and right
	if (data <= root->data) {
		return search(root->left, data);
	}
	else {
		return search(root->right, data);
	}

}
void bfs(node*root) {
	queue<node*> q;
	q.push(root);

	while (!q.empty()) {
		node* f = q.front();
		cout << f->data << " ";
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
	cout << root->data << " ";
	inorder(root->right);
}
node*deleteBST(node*root, int data) {
	if (root == NULL) {
		return NULL;
	}
	else if (data < root->data) {
		root->left = deleteBST(root->left, data);
		return root;
	}
	else if (data == root->data) {
		//Found the node to delete 3 case
		// 1 -- node with 0 children(delete and NULL)
		if (root->left == NULL && root->right == NULL) {
			delete root;
			return NULL;
		}
		// 2 -- node with 1 child
		if (root->left != NULL && root->right == NULL) {
			node *temp = root->left;
			delete root;
			return temp;
		}
		if (root->right != NULL && root->left == NULL) {
			node *temp = root->right;
			delete root;
			return temp;
		}
		// 3 -- Node With 2 child
		node *replace = root -> right;
		//find sucessor in right
		while (replace->left != NULL) {
			replace = replace ->left;
		}

		root->data = replace->data;
		root->right = deleteBST(root->right, replace->data);

		return root;

	}
	else
	{
		root->right = deleteBST(root->right, data);
		return root;
	}
}

int main() {
	node * root = build();
	inorder(root);
	cout << endl;


	int s;
	cin >> s;

	root = deleteBST(root, s);
	inorder(root);
	cout << endl;
	bfs(root);



	return 0;
}