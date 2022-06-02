#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void print(vector<int>v) {
	for (int x : v) {
		cout << x << " ";
	}
	cout << endl;
}
bool minheap = false;
bool compare(int a, int b) {
	if (minheap) {
		return a < b;//for minmheap
	}
	else {
		return a > b; //for maxheap
	}
}
void heapyfi(vector<int>&v, int idx, int size ) {
	int left = 2 * idx;
	int right = left + 1;

	int min_idx = idx;
	int last = size - 1;
	if ( left <= last && compare(v[left], v[idx])) {
		min_idx = left;
	}
	if (right <= last && compare(v[right], v[min_idx])) {
		min_idx = right;
	}
	if (min_idx != idx) {
		swap(v[idx], v[min_idx]);
		heapyfi(v, min_idx, size);
	}
}

void buildheap(vector<int>&v) {
	for (int i = (v.size() - 1 / 2); i >= 1; i--) {
		heapyfi(v, i, v.size());
	}
}
void heapsort(vector<int> &v) {
	buildheap(v);
	int n = v.size();
	//remove the n-1 ele from heap
	while (n > 1) {
		swap(v[1], v[n - 1]);
		///remove that ele
		n--;
		heapyfi(v, 1, n);
	}
}




int main() {
	vector<int> v;
	v.push_back(-1);

	int n;
	cin >> n;

	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
	}
	heapsort(v);
	print(v);
	return 0;
}