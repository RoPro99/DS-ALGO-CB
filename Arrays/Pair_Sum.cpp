#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	// int n,sum;
	// cin>>n;
	// int a[1000];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin>>a[i];
	// }
	// cin>>sum;

	int a[]={1,3,5,7,10,11,12,13};
	int sum=16;
	int i=0;
	int j= sizeof(a)/sizeof(int)-1;
	while(i<j){
		int CurrentSum =a[i]+a[j];
		if(CurrentSum>sum){
			j--;
		}
		else if(CurrentSum<sum){
			i++;
		}
		else if(CurrentSum==sum){
			cout<<a[i]<<"And"<<a[j]<<endl;
			i++;
			j--;
		}
	}
	return 0;
}