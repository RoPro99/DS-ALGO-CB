#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void alloccurance(int *arr,int i,int n,int key){
	///base case
	if(i==n){
		return ;
	}
	if(arr	[i] == key){
		cout<<i<<" ";
	}
	alloccurance(arr,i+1,n,key);
}



int LastOccurance(int *arr,int n,int key){
	//base case
	if(n==0){
		return -1;
	}
	//recususive case
	int i=LastOccurance(arr+1,n-1,key);
	if(i==-1){
		if(arr[0]==key){
			return 0;

		}
		else{
			return -1;
		}
	}
	return i+1;
}





int FirstOccurance(int *arr,int n,int key){
//base case
	if(n==0){
		return -1;
	}
	//recursive case
	if(arr[0]==key){ 
		return 0;
	}
	int i= FirstOccurance(arr+1,n-1,key);
	if(i== -1){
		return -1;
	}
	return i + 1;
}
// //Different Method 
// int LinearSearch(int *arr,int i,int n,int key){

// 	//base case
// 	if(i==n){
// 		return -1;
// 	}
// 	//recursive case
// 	if(arr[i]==key){
// 		return i;
// 	}
// 	return LinearSearch(arr,i+1,n,key);
// }

int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,7,10};
	int key;
	cin>>key;
	int n=sizeof(arr)/sizeof(int);

    cout<<FirstOccurance(arr,n,key);
    cout<<endl;
    cout<<LastOccurance(arr,n,key);
    cout<<endl;
    alloccurance(arr,0,n,key);

    //cout<<LinearSearch(arr,n,key);
    
	return 0;
}