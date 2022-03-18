#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n,largest,second;
	cin>>n;
	int arr[10000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	//cout<<max<<endl;
	if(arr[0]<arr[1]){
		largest = arr[1];
		second= arr[0];
	}
	else{
		largest = arr[0];
		second = arr[1];
	}
	for(int i=2;i<n;i++){
		if(arr[i]>largest){
			second = largest;
			largest = arr[i];
		}
		else if(arr[i]>second && arr[i]!= largest){
			second = arr[i];
		}
	}
	//cout<<second<<endl;

cout<<(max+second)<<endl;
	return 0;
}