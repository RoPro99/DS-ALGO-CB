#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	int arr[1000][1000];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int key;
	cin>>key;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m-1;j++){
			if(key==arr[i][j]){
				cout<<"1"<<endl;
				 
			}
			else{
				cout<<"0"<<endl;
			}
		}
	}
	return 0;
}