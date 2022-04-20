#include<bits/stdc++.h>
#include<iostream>
#include "Stack_Implemention_Array.cpp"
using namespace std;
int main() {
	stackusingArray s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);

	cout << s.top() << endl; //result = 50;

	cout << s.pop() << endl; //10 20 30 40
	cout << s.pop() << endl; //10 20 30
	cout << s.pop() << endl;//10 20

	cout << s.size() << endl; //Answer = 2

	cout << s.isEmpty() << endl; //Answer = False



	return 0;
}