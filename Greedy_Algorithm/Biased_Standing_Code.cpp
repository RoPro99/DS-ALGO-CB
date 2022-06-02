#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int abs(int i, int j) {
	if (i - j > 0) {
		return i - j;
	}
	return j - i;
}
int main() {
	int arr[1000000] = {0};
	int t, n;
	cin >> t;
	while (t--) {
		memset(arr, 0, sizeof arr);
		string name;
		int n;
		int rank;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> name >> rank;
			arr[rank]++;
		}
		//Greedy Approch to assign the nearest rank
		int actual_rank = 1;
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			while (arr[i]) {
				sum += abs(actual_rank, i);
				arr[i]--;
				actual_rank++;
			}
		}
		cout << sum << endl;


	}
	return 0;
}