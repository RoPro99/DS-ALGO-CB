#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	//read a list of string and we will store them in 2d array
	char a[100][1000];
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++){
		cin.getline(a[i], 1000);
	}
	///print out all strings
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}