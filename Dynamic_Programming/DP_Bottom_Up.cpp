#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fibBu(int n) {
	int dp[1000] = {0};
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}
int main() {
	int n;
	cin >> n;

	cout << fibBu(n) << endl;

	return 0;
}