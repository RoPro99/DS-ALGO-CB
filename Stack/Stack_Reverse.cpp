#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void Transfer(stack<int> &s1, stack<int>&s2, int n) {
	for (int i = 0; i < n; i++) {
		s2.push(s1.top());
		s1.pop();
	}
}
void ReverseStack(stack<int>&s1) {
	//get helper stack
	stack<int> s2;
	int n = s1.size(); //to get size
	for (int i = 0; i < n; i++) {
		//pick the element from top and insert in the bottom
		int x = s1.top();
		s1.pop();
		//transfer the element n-i-1 ele into s1 into s2
		Transfer(s1, s2, n - i - 1);

		//insert ele x in s1
		s1.push(x);

		//transfer again ele from s2 to s1
		Transfer(s2, s1, n - i - 1);
	}

}
int main() {
	stack<int> s;

	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	ReverseStack(s);
	while (!s.empty()) {
		cout << s.top() << " ,";
		s.pop();
	}
	return 0;
}