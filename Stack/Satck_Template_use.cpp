#include<bits/stdc++.h>
#include<iostream>
#include "Stack_Templates.cpp"
using namespace std;
int main() {
	Pair <int, double>p1;
	p1.setX(1000.34);
	p1.setY(100.34);

	cout << p1.getX() << " " << p1.getY() << endl;
	// Pair<int> p1;//calling object but call int data type
	// p1.setX(10);
	// p1.setY(20);

	// cout << p1.getX() << " " << p1.getY() << endl;

	// Pair<double> p2;
	// p2.setX(500.34);
	// p2.setY(84.21);
	// cout << p2.getX() << " " << p2.getY() << endl;

	// Pair <char> p3;
	// p3.setX("RO");
	// p3.setY("HAN");
	// cout << p3.getX() << " " << p3.getY() << endl;
	return 0;
}