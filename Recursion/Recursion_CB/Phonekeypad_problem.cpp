#include<bits/stdc++.h>
#include<iostream>
using namespace std;
char keypad[][10]={" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void generate_names(char *in,char *out,int i,int j){
	//Base case
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	//recursive case
	int digit=in[i]-'0';///'2'-'0'=2
	//for 1 and 0
	if(digit==0 || digit ==1){
		generate_names(in,out,i+1,j);
	}
	for(int k=0;keypad[digit][k]!='\0';k++){
		out[j]=keypad[digit][k];
		////fill remaining part
		generate_names(in,out,i+1,j+1);
	}
	return;

}



int main(){
	char in[100];
	cin>>in;

	char out[100];

	generate_names(in,out,0,0);
	return 0;
}