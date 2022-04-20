#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int partition(int *arr, int start, int end) {
	///we have do it INPLACE(can't take extra array)
	int i = start - 1;
	int j = start;

	int pivot = arr[end];

	for (; j <= end - 1;) {
		if (arr[j] <= pivot) {
			//merge the samller ele
			i = i + 1;
			swap(arr[i], arr[j]);
		}
		j++;//expand the region
	}
///place pivot in correct index
	swap(arr[i + 1], arr[end]);
	return i + 1;
}
void quiksort(int *arr, int start, int end) {
	//base case
	if (start >= end) {
		return;
	}
	//Recursive case
	int pivot = partition(arr, start, end); //get pivot ele
	//sort left part
	quiksort(arr, start, pivot - 1);
	//sort right part
	quiksort(arr, pivot + 1, end);


}
int main() {
	//create array
	int n;
	cin >> n;
	int arr[1000000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	quiksort(arr, 0, n - 1); //calling Quiksort With star=0,end=n-1


	//print the array
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";

	}
	return 0;
}