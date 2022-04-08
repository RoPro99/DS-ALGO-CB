#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void string_Compression(string str){
	//Step 1 create a length
	int len=str.length();
	for(int i=0;i<len;i++){
		int count=1;
		while(i<len-1 && str[i]==str[i+1]){
			count++;
			i++;
		}
		if(count==1){
			cout<<str[i]<<count<<endl;
		}
		else{
			cout<<str[i]<<count<<endl;
		}
	}
}
int main(){
	string str;
	cin>>str;

	string_Compression(str);
	return 0;
}