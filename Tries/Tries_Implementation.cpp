#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>
using namespace std;
class node {
public:
	char data;
	unordered_map<char , node*>children;
	bool terminal;


	//constructor
	node(char d) {
		data = d;
		terminal = false;
	}
};
class tries {
	node*root;
	int cnt;
public:
	tries() {
		root = new node('\0');
		cnt = 0;
	}

	void insert(char *w) {
		node*root;
		node*	temp = root;
		for (int i = 0; w[i] != '\0'; i++) {
			char ch = w[i];
			if (temp->children.count(ch)) {//if cooresponding node is there go here
				temp = temp->children[ch];
			}
			else {///else if corresponding node is not there then go here
				node*n = new node(ch);
				temp->children[ch] = n;
				temp = n;
			}
		}
		temp->terminal = true;

	}
	bool find(char *w) {
		node* temp = root;
		for (int i = 0; w[i] != '\0'; i++) {
			char ch = w[i];
			if (temp->children.count(ch) == 0) {
				return false;
			}
			else {
				temp = temp->children[ch];
			}
		}
		return temp->terminal;
	}
};
int main() {
	tries t;
	char words[][10] = {"a", "hello", "not", "news", "apple"};
	char w[10];
	cin >> w;

	for (int i = 0; i < 5; i++) {
		t.insert(words[i]);
	}
	if (t.find(ch)) {
		cout << "Present:)" << endl;
	}
	else {
		cout << "Not Present:(" << endl;
	}

	return 0;
}