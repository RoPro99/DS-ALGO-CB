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
	int target;
	cin>>target;
	int l=0;
	int r=n-1;
	while(l<r){
		if(arr[l]+arr[r]==target){
			cout<<arr[l]<<"and"<<arr[r]<<endl;
			l++;
			r--;
			break;
		}
	}
	return 0;
}