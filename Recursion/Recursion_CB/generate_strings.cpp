#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void string_generate(char *in,char *out,int i,int j){
	//Base case
	if(in[i]=='\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	//Recursive case
	//two options
	//one digit at time
	int digit = in[i]-'0';
	char ch= digit + 'A'-1;//1+'A'-1=A
	out[j]=ch;
	string_generate(in,out,i+1,j+1);


	//two digit at time
	if(in[i+1]!='\0'){
		int SecondDigit=in[i+1]-'0';
		int no=digit*10 + SecondDigit;
		if(no<=26){
			ch=no + 'A'-1;
			out[j]=ch;
			string_generate(in,out,i+2,j+1);
		}
	}
	return;
}




int main(){
	char arr[1000];
	cin>>arr;

	char out[100];
	string_generate(arr,out,0,0);
	return 0;
}