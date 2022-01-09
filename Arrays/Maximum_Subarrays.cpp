#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	int CurrentSum=0;
	int maxisum=0;
	int left=-1;
  	int right=-1;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; i++)
	{
	 for(int j=i;j<n;j++){
	 	CurrentSum=0;
	 	for(int k=i;k<=j;k++){
	 		CurrentSum += a[k];


	 	}
	 	if (CurrentSum>maxisum)
	 	{
	 		maxisum = CurrentSum;
	 		left=i;
	 		right=j;
	 	}

	 }
	}
	//print maximum subarrays
	cout<<"Maximum Sum is "<<maxisum<<endl;
	//Print element
	for(int k=left;k<=right;k++){
		cout<<a[k]<<",";
	}
	return 0;
}