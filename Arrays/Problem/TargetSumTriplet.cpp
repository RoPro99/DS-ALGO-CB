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
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		int l=1+i;
		int r=n-1;
		while(l<r){
			if(arr[i]+arr[l]+arr[r] == target){
				cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
				l++;
				r--;
			}
			else if(arr[i]+arr[l]+arr[r]>target){
				r--;
			}
			else{
				l++;
			}
		}
	}
	return 0;
}