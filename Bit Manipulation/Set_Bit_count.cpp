#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int countBit(int n){
	int ans=0;
	while(n>0){
		ans += (n&1);
		n=n>>1;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<countBit(n)<<endl;
	cout<<__builtin_popcount(n)<<endl;////builtin for set bits
	return 0;
}