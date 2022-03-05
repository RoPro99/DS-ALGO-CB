#include<bits/stdc++.h>
#include<iostream>
#include<vector>///First step to include header file
using namespace std;
int main(){
	vector<int>a;////intialization--->1
	vector<int>b(5,10);///intialization--->2 here 5 element having value 10 i.e 10,10,10,10,10
	vector<int>c(b.begin(),b.end());///here c copy all element of b
	vector<int>d{1,2,3,4,5};///intialization----> 3 
		/////now we ready to perfrom some iteration mainly devided into three types
	for(int i=0;i<c.size();i++){//1] here same as arrray but instead of looping form we loop from c.size
		cout<<c[i]<<",";
	}
	cout<<endl;
	for(auto it=b.begin();it!=b.end();it++){//2]Not good choice lengthy and some times confusion
		cout<<(*it)<<",";
	}
	cout<<endl;
	for(int x:c){//3]personal favourite easy to iterate here d=vector and x=value inside that d
		cout<<x<<",";
	}
	cout<<endl;
	//now we talk about how we can get input from a vector
	vector<int>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		v.push_back(no);
	}
	for(int x:v){
		cout<<x<<",";
	}
	cout<<endl;


	return 0;
	}
