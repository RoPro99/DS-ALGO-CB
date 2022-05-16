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
void reverse(char *s) {
	int i = 0;
	int j = length(s) - 1;
	while (i < j) {
		char tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;

		i++;
		j--;
	}



}
int main() {
	char s[1000];
	cin.getline(s, 1000);
	reverse(s);

	cout << s << "";


	return 0;
}