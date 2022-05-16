#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {

	string s1, s2, s3;
	char a, b;
	int len1, len2;

	cin >> s1 >> s2;

	len1 = s1.size();
	len2 = s2.size();
	cout << len1 << " " << len2;
	cout << endl;

	cout << s1 + s2 << " ";
	cout << endl;

	a = s2[0];
	b = s1[0];
	s1[0] = a;
	s2[0] = b;
	cout << s1 << " " << s2;


	return 0;
}