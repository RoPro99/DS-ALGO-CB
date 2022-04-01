#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sumofarr(int *arr,int *arr1){
	int val=arr+arr1;
	return val;

}

int main(){
	int n;
	cin>>n;
	int arr[10000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int m;
	cin>>m;
	int arr1[1000];
	for(int j=0;j<n;j++){
		cin>>arr1[j];
	}
	cout<<sumofarr(arr,arr1)<<" ";

	return 0;
}