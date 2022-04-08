#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	///take loop upto two decresing pionter
	for(int i=0;i<n;i+=2){
		//prev elelment
		if(i!=0 and arr[i]<arr[i-1]){
			swap(arr[i],arr[i-1]);
		}
		//next element
		if(i!=(n-1) and arr[i]<arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

	return 0;
}