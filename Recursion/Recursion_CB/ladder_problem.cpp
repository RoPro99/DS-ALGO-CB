#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ladder_problem(int n,int k){
	//base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	//recursive case
	int ans=0;
	for(int i=1;i<=k;i++){
		ans += ladder_problem(n-i,k);
	}
	return ans;
}


int main(){
	int n,k;
	cin>>n>>k;///here n is destination and k is possible steps

	cout<<ladder_problem(n,k)<<endl;
	return 0;
}