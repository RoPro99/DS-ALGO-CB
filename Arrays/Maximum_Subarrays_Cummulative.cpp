#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[1000];
	int Cumsum[1000]={0};
	int CurrentSum=0;
	int maxisum=0;
	int left=-1;
  	int right=-1;
  	cin>>a[0];
  	Cumsum[0]=a[0];

	for (int i = 1; i < n; i++)
	{
		cin>>a[i];
		Cumsum[i]= Cumsum[i-1]+a[i];
	}
	for (int i = 0; i < n; i++)
	{
	 for(int j=i;j<n;j++){
	 	CurrentSum=0;
	 	CurrentSum= Cumsum[j]-Cumsum[i-1]; 


	 	
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