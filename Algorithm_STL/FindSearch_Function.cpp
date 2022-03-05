#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	
	int arr[]={1,7,8,5,6,8,11,99};
	int n = sizeof(arr)/sizeof(int);
	///Search Function
	int key;
	cin>>key;
	auto it=find(arr,arr+n,key);
	int index = it - arr;
	if(index == n){
		cout<<key<<" Key is Not Available"<<endl;
	} 
	else{
		cout<<"Key is Availabe at INdex "<<index<<endl;
	}
	return 0;
}