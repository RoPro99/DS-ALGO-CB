#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void generate_brackets(char *output,int n,int idx,int open,int close){
 ////base case
	if(idx == 2*n){
		output[idx]='\0';
		cout<<output<<endl;
		return;
	}
	//recursive case
	//two options
	///FOR OPEN
	if(open<n){
		output[idx]='(';
		generate_brackets(output,n,idx+1,open+1,close);
	}
	//FOR CLOSE
	 if(close<open){
	 	output[idx]=')';
	 	generate_brackets(output,n,idx+1,open,close+1); 
	 }
	 return;
}




int main(){
	int n;
	cin>>n;

	char output[100];
	int idx=0;

	generate_brackets(output,n,idx,0,0);
	return 0;
}