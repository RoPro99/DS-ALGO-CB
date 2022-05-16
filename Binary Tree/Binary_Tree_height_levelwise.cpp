#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node {
public:
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
void printKlevel(node*root, int k) {
	if (root == NULL) {
		return;
	}
	if (k == 1) {
		cout << root->data << " ";
		return;
	}
	printKlevel(root->left, k - 1);
	printKlevel(root->right, k - 1);
	return;

}
void printAlllevel(node*root) {
	int H = heighttree(root);
	for (int i = 1; i <= H; i++) {
		printKlevel(root, i);
		cout << endl;
	}
	return;
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
	node*root = buildtree();
	// int k;
	// cin >> k;
	// printKlevel(root, k);
	// cout << endl;
	// cout << heighttree(root) << endl;
	printAlllevel(root);

	return 0;
}