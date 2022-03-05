#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//bool comparator
bool compare(int a,int b){
	return a<b;///a<b for sorted from 1,2,3,4 and a>b for 5,4,3,2,1
 }

int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	sort(arr,arr+n,compare);////main function
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<", ";
	}
	return 0;
}