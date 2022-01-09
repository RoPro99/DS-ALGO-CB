#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int inp[100];
	for (int i = 0; i < n; i++)

	{
		cin>>inp[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout<<inp[i]<<endl;
	}
	int max=INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (inp[i]>max)
		{
			max=inp[i];
		}

		/* code */
	}
	cout<<"Largest Element In Array-:"<< max<<endl;


	
	return 0;
}