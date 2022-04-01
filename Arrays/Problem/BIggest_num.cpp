#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int compare(int x,int y){
	return x < y;
}
void largetnumber(int *arr,int n){
	sort(arr,arr+n,compare);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}


int main(){
	int n;
	cin>>n;
	int arr[1000000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	largetnumber(arr,n);
	return 0;
}