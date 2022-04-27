#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	queue<char>q;
	int freq[27] = {0};
	//Running stream until .
	char ch;
	cin >> ch;
	while (ch != '.') {
		//logic will go here
		//step1 -->inset queue and frequency table
		q.push(ch);
		freq[ch - 'a']++; //a=60 b=61 a-b ==1


		//step2-->>query part
		while (!q.empty()) {
			int idx = q.front() - 'a';
			if (freq[idx] > 1) {
				q.pop();
			}
			else {
				cout << q.front() << endl;
				break;
			}


		}
		//if q is empty
		if (q.empty()) {
			cout << -1 << endl;
		}


		cin >> ch;


	}

	return 0;
}