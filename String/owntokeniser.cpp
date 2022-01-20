#include<bits/stdc++.h>
#include<iostream>
using namespace std;

char *mystrtok(char *str, char delim){
///string and single char act as delim
	static char*input=NULL;
	if(str!=NULL){
		//we are making first call
		input = str;
	}
	//check base case
	if(input == NULL){
		return NULL;
	}
	//start extracting token and store into array
	char *output = new char[strlen(input)+1];
	int i=0;
	for(; input[i]!='\0';i++){

		if(input[i]!=delim){
			output[i] = input[i];

		}
		else{
			output[i]='\0';
			input = input + i +1;
			return output;
		}
	}
	//corner case
	output[i]='\0';
	input[i]=NULL;
	return output;

}





int main(){
	char s[100]="Today is rainy day";
	char *ptr= mystrtok(s,' ');
	cout<<ptr<<endl;
	while(ptr!=NULL){
		ptr= mystrtok(NULL,' ');///" "delimiter
		cout<<ptr<<endl;
	
	return 0;
}