#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int power(int a,int n){
	//base case
	if(n==0){
		return 1;
	}
	return a*power(a,n-1); 
}
int fastpower(int a,int n){
	//base case
	if(n==0){
		return 1;
	}
	//recursive case
	int smaller_ans=fastpower(a,n/2);
	smaller_ans *= smaller_ans;
	if(n&1){
		return smaller_ans*a;

	}
	return smaller_ans;
}
int main(){
	int a,n;
	cin>>a>>n;

	cout<<power(a,n);
	cout<<endl;
	cout<<fastpower(a,n);
	return 0;
}