#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
//comparator function
bool compare(int a,int b){

	cout<<"Comparing"<<a<<"to"<<b<<endl;
	return a > b;
}

using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	//applying the sort function
	sort(a,a+n,compare);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<",";
	}
	
	return 0;
}