#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	int CurrentSum=0;
	int MaximumSum=0;
	cin>>n;
	int a[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	///Kadene's Algorithm
	for(int i=0;i<n;i++){
		CurrentSum = CurrentSum + a[i];
		if (CurrentSum<0)
		{
			CurrentSum=0;
		}
		MaximumSum = max(CurrentSum,MaximumSum);
	}
	cout<<MaximumSum<<endl;
	

	
	return 0;
}