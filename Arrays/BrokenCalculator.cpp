#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n,fact=1;
	cin>>n;
	if(n<0){
		cout<<"1"<<endl;
	}
	else{
	for (int i = 1; i <=n; i++)
	{
		fact=fact*i;
	}
}
	cout<<fact<<endl;
	return 0;
}