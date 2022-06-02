#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	priority_queue<int> pq;
	for (int i = 1; i < n; i++) {
		int no;
		cin >> no;
		pq.push(no);
	}
	//remove the ele from heap
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}