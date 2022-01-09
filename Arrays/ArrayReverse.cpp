#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void PrintArray(int input[],int n){
	for (int i = 0; i < n; ++i)
	{
		cout<< input[i]<<" ";
	}
	cout<<endl;
}

void reverse(int input[],int n){
	int i=0;int j=n-1;
	while(i<j){
		int temp=input[i];
		input[i]=input[j];
		input[j]=temp
		;
		i++;
		j--;

	}
}
int main(){
	int a=10;
	int n;
	cin>>n;
	
	int b[100]={2,3,5,6,4,9,7,6,8,1};
	reverse(b,n);
	PrintArray(b,n);
	
	return 0;
}