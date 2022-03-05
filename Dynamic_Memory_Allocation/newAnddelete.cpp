#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	
	///Normal Allocation + deallocation = compiler auto delete
	int b[1000];
	cout<<sizeof(b)<<endl;


     
	///Dynamic Allocation(new)
	int n;
	cin>>n;
	int *a= new int[n];
	cout<<sizeof(a)<<endl;

	///No Change
	for(int i=0;i<n;i++){
		cin>>a[i];
		cout<<a[i]<<",";
	}
	////Free the space(delete)
	delete [] a;


	return 0;
}