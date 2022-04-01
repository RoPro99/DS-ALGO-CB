#include<bits/stdc++.h>
#include<iostream>
using namespace std;
char words[][10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};

void printSpellings(int n){
	//base case
	if(n==0){
		return;
	}
	//recursive case for 204
	printSpellings(n/10);
	int digit=n%10;////it will give last didgit 8
	cout<<words[digit]<<" ";
}




int main(){
	int n;
	cin>>n;

	printSpellings(n);
	return 0;
}