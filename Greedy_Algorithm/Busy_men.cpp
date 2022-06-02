#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//step-2 Custom Comparitor
bool compare(pair<int, int>p1, pair<int, int>p2) {

	return p1.second < p2.second;//compare end values
}
int main() {
	int t, n, start, end;
	cin >> t;
	vector<pair<int, int>> v;

	while (t--) {


		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> start >> end;
			v.push_back(make_pair(start, end));//store both start and end in pair vector
		}
		//Activity Selection Algorithm
		//step-1 sort according to finish timing
		sort(v.begin(), v.end(), compare);
		//step-3 start picking activity
		int res = 1;
		int fin = v[0].second;
		//step-4 iterate over remaining activity
		for (int i = 1; i < n; i++) {
			if (v[i].first >= fin) {//if start value is > then finish
				fin = v[i].second;
				res++;
			}
		}
		cout << res << endl;


		v.clear();///clear my vector
	}
	return 0;
}