#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int target;
	cin>>target;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		for(int j=1+i;j<n;j++){
			if(a[j]+a[i] ==target){
				cout<<a[i]<<"and"<<a[j];
			}
		}
	}
	return 0;
}