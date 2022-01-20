#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[100]="Today is rainy day";
	char *ptr=strtok(s," ");
	cout<<ptr<<endl;
	while(ptr!=NULL){
		ptr=strtok(NULL," ");///" "delimiter
		cout<<ptr<<endl;
	}
	return 0;
}