#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int first_occurance(int *arr,int n,int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	///firat and last ocuurance
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			///two things
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;

}
int last_occurance(int *arr,int n,int key){
	int s=0;
	int e=n-1;
	int ans=-1;
	///firat and last ocuurance
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			///two things
			ans=mid;
			s=mid+1;////here it will start
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;

}
int main(){
	int arr[]={1,2,5,8,8,8,8,10,12,15,20};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	///first and last occurance calling
	cout<<first_occurance(arr,n,key)<<endl;
	cout<<last_occurance(arr,n,key)<<endl;
	return 0;
}