#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isSorted(int *arr,int n){
	//base case
	if(n==0 or n==1){
		return true;
	}
	//recursive case
	if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
		return true;
	}
	return false;
}
int main(){
	int arr[]={1,2,3,14,5};
	int n=sizeof(arr)/sizeof(n);


	cout<<isSorted(arr,n)<<endl;
	
	return 0;
}