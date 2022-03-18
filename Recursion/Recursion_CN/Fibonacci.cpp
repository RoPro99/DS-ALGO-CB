#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int fib(int n){
	//base case
	if(n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	int smallop1=fib(n-1);
	int smallop2=fib(n-2);
	return smallop1+smallop2;
}
int main(){
	int n;
	cin>>n;

	cout<<fib(n)<<endl;
	return 0;
}