#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Queue {
	int *arr;
	int f, rear, cursize, maxsize;
public:
	Queue(int ds = 5) {//ds=default Size
		arr = new int[ds];
		cursize = 0;
		maxsize = ds;//its like n
		f = 0;
		rear = maxsize - 1;
	}
	bool isFull() {
		return cursize == maxsize;
	}
	void push(int data) {
		if (!isFull()) {
			rear = (rear + 1 ) % maxsize;
			arr[rear] = data;
			cursize++;
		}
	}
	bool isEmpty() {
		return cursize == 0;
	}
	void pop() {
		if (!isEmpty()) {
			f   = (f + 1) % maxsize;
			cursize --;
		}

	}
	int front() {
		return arr[f];
	}


	~Queue() {
		if (arr != NULL) {
			delete [] arr;
			arr = NULL;
		}

	}
};





int main() {
	Queue q;
	q.push(10);
	q.push(11);
	q.push(21);
	q.push(31);
	q.push(41);

	q.pop();
	q.pop();

	while (!q.isEmpty()) {
		cout << q.front() << ",";
		q.pop();
	}

	return 0;
}