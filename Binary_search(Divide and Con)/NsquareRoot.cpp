#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int squareroot(int n){
	int start=0;
	int end=n;
	float ans=-1;//not known
	while(start<=end){
		int middle=(start+end)/2;//taking mid value
		if(middle*middle==n){
			return middle;
		}
		if(middle*middle<n){
			ans=middle;
			start = middle+1;
		}
		else{
			end = middle - 1;
		}
	}
	return ans;

}


int main(){
	int n;
	cin>>n;
	cout<<squareroot(n)<<endl;
	
	return 0;
}