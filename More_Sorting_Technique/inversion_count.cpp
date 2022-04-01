#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//ineresion sort
int merge(int *arr,int start,int end){
	int mid=(start+end)/2;
	int i=start;
	int j=(mid+1);
	int k=start;

	int temp[100000];

	int cnt=0;///cross_inversion

	while(i<=mid and j<=end){
		if(arr[i]<=arr[j]){
			temp[k]=arr[i];
			k++;
			i++;

		}
		else{
			temp[k++]=arr[j+1];
			cnt += mid - i + 1;
		}
	}
	//fill the remaining array with
	while(i<=mid){
		temp[k++] = arr[i++];

	}
	while(j<=end){
		temp[k++] = arr[j];
	}
	//copy all element
	for(int i=start;i<=end;i++){
				arr[i]=temp[i];
	}
	return cnt;
}


int inversion_count(int *arr,int start,int end){
	//Base Case
	if(start>=end){
		return 0;
	}
	//recursion case
	//Merge sort
	int mid=(start+end)/2;
	int x=inversion_count(arr,start,mid);
	int y=inversion_count(arr,mid+1,end);
	int z=merge(arr,start,end);
	return x+y+z;

}






int main(){
	int arr[]={1, 5, 2, 6, 3, 0};
	int n=sizeof(arr)/sizeof(int);


	cout<<inversion_count(arr,0,n-1)<<endl;
	
	return 0;
}