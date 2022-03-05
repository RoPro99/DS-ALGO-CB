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
		for(int j=1+i;j<n;j++){
			for(int k=0;k<n-1;k--){
				if(arr[i]+arr[j]+arr[k]==target)
					cout<<arr[i]<<","<<arr[j]<<"and"<<arr[k]<<endl;
			}
		}
	}
	return 0;
}