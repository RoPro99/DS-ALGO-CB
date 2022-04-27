#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//Implementation of stack using two queue
template<typename T>
class Stack {
	queue<T> q1;
	queue<T> q2;
public:
	void push(T x) {

		q1.push(x);
	}
	void pop() {
		//remove last added ele in queue
		//interchange the name q1 and q2
		if (q1.empty()) {
			return;
		}
		while (q1.size() > 1) {
			T ele = q1.front();
			q2.push(ele);
			q1.pop();
		}
		q1.pop();//remove last ele
		//swap the names q1 and q2
		swap(q1, q2);
	}
	T top() {
		while (q1.size() > 1) {
			T ele = q1.front();
			q2.push(ele);
			q1.pop();
		}
		T ele = q1.front();
		q1.pop();
		q2.push(ele);
		swap(q1, q2);
		return ele;

	}
	int size() {
		return q1.size() + q2.size();
	}
	bool empty() {
		return size() == 0;
	}

};
int main() {
	Stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	while (!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}

	return 0;
}