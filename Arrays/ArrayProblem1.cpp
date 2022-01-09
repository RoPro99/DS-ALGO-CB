#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){				/*Array Sum*/
	int n;
	cin>>n;
	int inp[100];
	for (int i = 0; i < n; ++i)
	{
		cin>>inp[i];
		/* code */
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<inp[i]<<endl;
		/* code */
	}
	int sum=inp[0];
	for (int i = 1; i < n; ++i)
	{
		sum += inp[i];
		/* code */
	}
	cout<<"sum "<<sum<<endl;

	
	return 0;
}