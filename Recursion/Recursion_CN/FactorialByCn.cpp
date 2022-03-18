#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int factorial(int n){
	//Base Case
	if(n==0){
		return 1;

	}
	//Recusive case
	else{
		int smalloutput=factorial(n-1);
		int output = n*smalloutput;
		return output;
	}
}
int main(){
	int n;
	cin>>n;

	cout<<factorial(n)<<endl;
	
	return 0;
}