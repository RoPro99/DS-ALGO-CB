#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(int *arr,int start,int end){
	int mid = (start+end)/2;
	int i=start;
	int j= mid+1;
	int k=start;

	int temp[1000];
	while(i<=mid && j<=end){
		if(arr[i] < arr[j]){
			temp[k++]=arr[i++];
		}
		else{
			temp[k++]=arr[j++];
		}

	}
	while(i<=mid){
		temp[k++]=arr[i++];
	}
	while(j<=end){
		temp[k++]=arr[j++];
	}
	//we need to copy temp array in origional array
	for(int i=start;i<end;i++){
		arr[i]=temp[i];
	}
}
void mergesort(int *arr,int start,int end){
	//step1
	//base
	if(start>=end){
		return;
	}
	///follow 3 Sub Step
	//1. divide
	int mid = (start+end)/2;

	//2.recursive the array start,mid;mid+1,end
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);

	//3. merge the two parts
	merge(arr,start,end);
}






int main(){
	int n;
	cin>>n;
	int arr[10000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	mergesort(arr,0,n-1);


	for(int i=0;i<n;i++){
		cout<<arr[i]<<", ";
		    
	}
	return 0;
}