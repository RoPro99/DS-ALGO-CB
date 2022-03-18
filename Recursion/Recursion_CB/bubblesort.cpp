#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void Bubblesrt(int *arr,int n){
	//base case
	if(n==1){
		return;
	}
	///recursive case + pair wise swapping
	for(int j=0;j<n-1;j++){
		if(arr[j] > a[j+1]){
			swap(a[j],a[j+1])
		}
		Bubblesrt(arr,n-1);
	}
}
void Bubblesrt_recursively(int *arr,int j,int n){
	//base case
	if(n==1){
		return;
	}
	if(j==n-1){
		return Bubblesrt_recursively(arr,0,n-1);///this work as for loop
	}
	//recursive case
	if(arr[j]>arr[j+1]){
		swap(arr[j],arr[j+1]);
	}
	Bubblesrt_recursively(arr,j+1,n);
	return;
}
int main(){
	int arr[]={5,4,3,1,2};
	int n=5;

	cout<<Bubblesrt(arr,n)<<", ";

	
	return 0;
}