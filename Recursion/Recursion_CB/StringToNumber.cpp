#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int StringToINteger(char *arr,int n){
	//base case
	if(n==0){
		return 0;
	}
	//recursive case
	int digit=arr[n-1] - '0';//last digit give 8
	int smaller_ans=StringToINteger(arr,n-1);///give123 


	return smaller_ans*10+digit;
}



int main(){
	char arr[]="1234";
	int len=strlen(arr);

	cout<<StringToINteger(arr,len);
	return 0;
}