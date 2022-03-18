#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void PrintFactor(int n){
	vector<pair<int,int> > factor;
	int cnt;
	for(int i=2;i*i<n;i++){
		if(n%i==0){
			cnt=0;
			while(n%i==0){
				cnt++;
				n/=i;
			}
			factor.push_back(make_pair(i,cnt));
		}
	}
	if(n!=1){
		factor.push_back(make_pair(n,1));
	}
	for(auto p:factor){
		cout<<p.first<<"^"<<p.second<<endl;
	}
	return;
}


int main(){
	int n;
	cin>>n;
	PrintFactor(n);
	
	return 0;
}