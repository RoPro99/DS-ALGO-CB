#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void subsets(char *in,char *out,int i,int j){
	//base case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	//recursion case
	//include current char
	out[j]=in[i];
	subsets(in,out,i+1,j+1);
	///exclude current char
	subsets(in,out,i+1,j);
}


int main(){
	char input[]="abc";
	char output[10];

	subsets(input,output,0,0);
	return 0;
}