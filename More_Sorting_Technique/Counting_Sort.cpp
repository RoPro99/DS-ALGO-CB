#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void Counting_sort(int *arr,int n){
//Step 1 take Largest value
	int largest=-1;
	for(int i=0;i<n;i++){
		largest=max(largest,arr[i]);
	}
//Step 2 Create Frequency Array 
	int *freq = new int[largest+1]{0};
//step 3 increse freq with arrray
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
//Step 4 Put the element back into array by reading frequency array
	int j=0;
	for(int i=0;i<=largest;i++){
		while(freq[i]>0){
		arr[j]=i;
		freq[i]--;
		j++;
	}
}

}

int main(){
	int arr[]={88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
	int n=sizeof(arr)/sizeof(int);
	Counting_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ,";
	}
	return 0;
}