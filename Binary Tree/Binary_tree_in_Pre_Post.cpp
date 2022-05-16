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
node *buildtree() {
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
//print inorder-->LRRI
void printinorder(node*root) {
	if (root == NULL) {
		return;
	}
	printinorder(root->left);
	cout << root->data << " ";
	printinorder(root->right);
}
//print postorder-->LRIR
void printpost(node*root) {
	if (root == NULL) {
		return;
	}
	printpost(root->left);
	printpost(root->right);
	cout << root->data << " ";

}



int main() {
	node *root = buildtree();
	printinorder(root);
	cout << endl;
	printpost(root);

	return 0;
}