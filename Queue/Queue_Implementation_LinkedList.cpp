#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Queue {
	int cursize;
	list<int> l;

public:
	Queue() {
		cursize = 0;
	}

	bool isEmpty() {
		return cursize == 0;
	}
	void push(int data) {
		l.push_back(data);
		cursize++;
	}

	void pop() {
		if (!isEmpty()) {
			cursize--;
			l.pop_front();
		}
	}
	int front() {
		return l.front();
	}



};

int main() {
	Queue q;
	for (int i = 1; i <= 8; i++) {
		q.push(i);
	}
	while (!q.isEmpty()) {
		cout << q.front() << ",";
		q.pop();
	}


	return 0;
}