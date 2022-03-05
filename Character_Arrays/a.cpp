#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

	char input[100];
	cin>>input;

	int arr[100];
	int k=0;
	for(int i=0;input[i]!='\0';i++){
		arr[k]=input[i];
		k++;
	}	

	// for (int i=0;input[i]!='\0';i++){
	// 	cout<<arr[i]<< " ";
	// }

	// finding the minimum;
	int min = arr[0];
	for (int i = 1; i < k; ++i)
	{
		if(arr[i]<min){
			min = arr[i];
		}
	}

	int max = arr[0];
	for (int i = 1; i < k; ++i)
	{
		if(arr[i]>max){
			max = arr[i];
		}
	}
	cout<<min+max<<endl;
	return 0;
}