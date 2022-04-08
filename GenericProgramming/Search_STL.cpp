#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//Linear Search
//T=Let's make template
template<typename T>//Replace array and key with T
int linearsearch(T *arr,int n,T key){
	//linear search
	for(int i=0;i<n;i++){
		if(arr[i]==key){
		return i;
	}
}
	return -1;
}




int main(){
	int arr[]={1,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	int key=9;
	//cout<<linearsearch(arr,n,key);

	//calling a another float
	float b[]={1.2,1.3,1.5};
	float k1=1.3;
	//cout<<linearsearch(b,3,k)<<endl;

	//calling
	char c[]={'A','B','C','D'};
	char k2='C';
	cout<<linearsearch(c,4,k2);

	return 0;
}