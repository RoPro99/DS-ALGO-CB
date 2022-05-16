#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int length(char *str) {
	int cnt = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		cnt++;
	}
	return cnt;
}
int main() {
	char str[1000];
	//cin >> str;
	cin.getline(str, 1000, 'h');
	cout << length(str);
	cout << endl;
	cout << str << " ";

	return 0;
}