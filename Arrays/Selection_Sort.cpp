#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void selection_sort(int *a,int n){
	for(int i=0;i<n-1;i++){
		//find out the smallest element in unsorted part
		int min_idx=i;
		for(int j=i;j<=n-1;j++){
			if(a[j]<a[min_idx]){
				min_idx=j;
			}

		}
		///After loop Swap 
		swap(a[i],a[min_idx]);
	}
}
int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	selection_sort(a,n);
	for (int i = 0; i < n; i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
}