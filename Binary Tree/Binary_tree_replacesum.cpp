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
	node *root = new node(d);
	root->left = buildtree();
	root->right = buildtree();
	return root;
}
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
int replacesum(node*root) {
	if (root == NULL) {
		return 0;
	}
	if (root->left == NULL && root->right == NULL) {
		return root->data;
	}
	//recursive root
	int leftsum = replacesum(root->left);
	int rightsum = replacesum(root->right);

	int temp = root->data;
	root->data = leftsum + rightsum ;
	return temp + root->data;

}
int main() {
	node*root = buildtree();
	bfs(root);
	cout << endl;
	replacesum(root);

	bfs(root);
	return 0;
}