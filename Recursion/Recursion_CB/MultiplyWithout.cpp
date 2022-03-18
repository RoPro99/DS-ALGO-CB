#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int multiply(int a,int b){
	//base coditoion 
	if(a==0){
		return 0;
	}
	//recursive case

	int x = a + multiply(a,b-1);
	return x;
}
int main(){
	int a,b;
	cin>>a>>b;

	cout<<multiply(a,b);
	return 0;
}