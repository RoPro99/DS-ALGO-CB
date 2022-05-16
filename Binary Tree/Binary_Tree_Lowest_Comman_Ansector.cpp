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
node*lca(node*root, int a, int b) {
	if (root == NULL) {
		return  NULL;
	}
	if (root->data == a || root->data == b) {
		return root;
	}
	//search left and rigth
	node*leftans = lca(root->left, a, b);
	node*rightans = lca(root->right, a, b);
	if (leftans != NULL and rightans != NULL) {
		return root;

	}
	if (leftans != NULL) {
		return leftans;
	}
	return rightans;
}


int main() {
	node *root = buildtree();
	int a = 7, b = 9;
	cout << "Lca of 4 and are 7 = " << lca(root, 4, 7)->data << endl;
	cout << "Lca of 10 and are 9 = " << lca(root, 10, 9)->data << endl;


	return 0;
}