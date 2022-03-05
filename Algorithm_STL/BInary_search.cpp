#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
	int arr[]={99,51,40,40,40,60,80,80,80};
	int n = sizeof(arr)/sizeof(int);
	///search for binary by calling boolean
	int key;
	cin>>key;


	bool present=binary_search(arr,arr+n,key);
	if(present){
		cout<<"KEY is Present"<<endl;
	}
	else
	{
		cout<<"KEY is Absent"<<endl;
	}
	///two more things
	////lower bound(start,end,key)--> For Index
	////upper bound((start,end,key))--> for
	auto lb=lower_bound(arr,arr+n,key);
	cout<<endl<<"Lower Bound of 40; "<<(lb-arr)<<endl;

	auto ub=upper_bound(arr,arr+n,key);
	cout<<endl<<"upper Bound of 40; "<<(ub-arr)<<endl;
   	
	// ////frequencie Calculation
	cout<<"Frequencies"<<(ub-lb)<<endl;










	return 0;
}