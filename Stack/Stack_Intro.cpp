#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.pop();
	s.size();//size of stack
	s.isEmpty();//shows stack is empty or not in boolean
	s.ifFull();//it sows stack is full or not
	cout << s.top() << endl; //*shows top element in the stack*// << endl;
	return 0;
}