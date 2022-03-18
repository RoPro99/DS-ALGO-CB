#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int sqare(int x,int n){
	if(x==0){
		return 0;
	}
	else{
		int result=pow(x,n);
		return result;
	}
}

int main(){
	int x,n;
	cin>>x>>n;

	cout<<sqare(x,n)<<endl;
	return 0;
}