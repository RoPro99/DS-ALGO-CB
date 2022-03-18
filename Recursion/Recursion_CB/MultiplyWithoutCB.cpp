#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int multiplywithout(int m,int n){
	//base case
	if(m==0){
		return 0;
	}
	//recusrsive casse
	int x = x  +  m;
	int ans=  x + multiplywithout(m,n-1);
	return ans;
}



int main(){
	int m,n;
	cin>>m>>n;


	cout<<multiplywithout(m,n);
	return 0;
}