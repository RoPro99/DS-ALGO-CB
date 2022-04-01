#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int kadane_algo(int *arr,int n){
	int cs=0,ms=0;
	for(int i=0;i<n;i++){
		cs=cs + arr[i];
		if(cs<0){
			cs=0;
		}
		ms=max(cs,ms);
	}
	return ms;
}
void maximucrlcearray(int *arr,int n){
	int max_kd=kadane_algo(arr,n);
	int Wrap_max =0;
	for(int i=0;i<n;i++){
		Wrap_max += arr[i];
		arr[i]=-arr[i];
	}
	Wrap_max = Wrap_max + kadane_algo(arr,n);
	int y =(Wrap_max > max_kd)? Wrap_max : max_kd;
	cout<<y;
}
int main(){
	int t;
	cin>>t;
	int n;
	cin>>n;
	while(t--){
	int arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	kadane_algo(arr,n);
	maximucrlcearray(arr,n);
	///logic


}	//kadanes algorithm
	return 0;
}