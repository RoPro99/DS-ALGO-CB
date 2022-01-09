#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void PrintArray(int inp[],int n){
	//cout<<"function"<<sizeof(inp)<<endl;
	cout<<"PrintArray"<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<inp[i]<<" ";/* code */
	}
	cout<<endl;							

}
int main(){
	int n;
	cout<<"Enter the N"<<endl;
	cin>>n;
	int inp[100];
	for(int i=0;i<n;i++){
		cin>>inp[i];
	}
	//cout<<"main"<<sizeof(inp)<<endl;
	PrintArray(inp,n);
	
	return 0;
}