#include<bits/stdc++.h>
#include<iostream>
#include "Stack_Node_LL.cpp"
using namespace std;
int main() {
	Stack<int> s;
	s.push(10);
	s.push(20);
	s.push(50);
	s.push(80);
	s.push(70);

	cout << s.top() << endl; //result=70

	cout << s.pop() << endl; //result = 10 20 50 80
	cout << s.pop() << endl; //result = 10 20 50
	cout << s.pop() << endl; //result = 10 20

	cout << s.getSize() << endl; //result = 2


	cout << s.top() << endl; //result = 20


	cout << s.isEmpty() << endl;//result = false
	return 0;
}