#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int b[1000];
	for (int i = 0; i < n; i++)
	{
		cin>>b[i];
		/* code */
	}
	int j=0;
	int p=2;
	for (int i = 0; i <= n-1; i++)
	{
		if(i<=4)
		{
			cout<<b[i]+j;
			j++;
		}
		else{
			cout<<b[i]+p;
			p=p-3;
		}
		/* code */
	}
	
	return 0;
}