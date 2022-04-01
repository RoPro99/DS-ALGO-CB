#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int profit(int N,int C,int *wt,int *price){
	//Base case
	if(N==0||C==0){
		return 0;
	}
	//recursive case
	int ans=0;
	int inc,exc;
	inc=exc=INT_MIN;
	//include
	if(wt[N-1]<=C){
	inc=price[N-1]+profit(N-1,C-wt[N-1],wt,price);
}
	//exclude
	exc=profit(N-1,C,wt,price);

	ans = max(inc,exc);
	return ans;


}

int main(){
	int waight[]={1,2,3,5};
	int price[]={40,20,30,100};

	int N=4;
	int C=7;


	cout<<profit(N,C,waight,price);
	return 0;
}