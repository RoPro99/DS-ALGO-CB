#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n,key;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the key element you want to search"<<endl;
	cin>>key;
	//linear search algo
	int i;
	for (i=0;i<n-1;i++){
		if(a[i]==key){
			cout<<key<<" "<<"found at"<<" "<<i<<" "<<"index"<<endl;
			break;
		}
	}
		if(i==n){
			cout<<key<<"Not Found"<<endl;
		
	}

	
	return 0;
}