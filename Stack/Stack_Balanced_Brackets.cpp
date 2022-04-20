#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool IsValidExp(char *s) {
	stack<char> stk;
	for (int i = 0; s[i] != '\0'; i++) {
		char ch = s[i]; //put a current character
		if (ch == '(') {
			stk.push(ch);
		}
		else if (ch == ')') {
			if (stk.empty() or stk.top() == '(');
			return false;
		}
		stk.pop();//if above condition is false
	}
	return stk.empty ? true : false;
}

int main() {
	char s[100] = "(a+(b-c)8d)";
	if (IsValidExp(s)) {
		cout << "YES :)";
	}
	else {
		cout << "NO :(";
	}

	return 0;
}