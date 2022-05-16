#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool canplacecow(int stalls[], int n, int c, int min_sep) {
	int last_cow = stalls[0];
	///PLACE FIRST COW IN FIRST PLACE
	int cnt = 1;
	for (int i = 1; i < n; i++) {
		if (stalls[i] - last_cow >= min_sep) {
			last_cow = stalls[i];
			cnt++;
			if (cnt == c) {
				return true;
			}
		}
	}
	return false;
}
int main() {
	int n;
	//Agressive cow problem
	int stalls[1000000000
	          ];
	for (int i = 0; i < n; i++) {
		cin >> stalls[i];
	}
	//int stalls[]={1, 2, 4, 8, 9};

	cin >> n;
	int c;
	cin >> c;
	///Binary search Algorithm
	int s = 0;
	int e = stalls[n - 1] - stalls[0];
	int ans = 0;
	while (s <= e) {
		int mid = (s + e) / 2;
		bool cowrahapayega = canplacecow(stalls, n, c, mid); {
			if (cowrahapayega) {
				ans = mid;
				s = mid + 1;
			}
			else {
				e = mid - 1;
			}
		}
	}
	cout << ans << endl;

	return 0;
}