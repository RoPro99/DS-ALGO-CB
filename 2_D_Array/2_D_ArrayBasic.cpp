#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	// Normal Array int a[5][3]={0};
	//Below 2d Array Input
	int a[1000][1000]={0};
	int m,n;
	cin>>m>>n;
	//Iterate Over
	int val=1;
	for (int rows = 0; rows <= m-1; rows++)
	{
		for(int cols =0;cols<=n-1;cols++){
			a[rows][cols]=val;
			val++;
			cout<<a[rows][cols]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}