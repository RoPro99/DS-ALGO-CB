
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void MaxCharacter(string &str){
	int freq[26]={0};
	int len=str.length();
	int max=0;
	char result;
	for(int i=0;i<len;i++){
		freq[str[i]-'a']++;
		if(max<freq[str[i]-'a']){
			max=freq[str[i]-'a'];
			result=str[i];
		}
	}
	cout<<result;
}




int main(){
	string str;
	getline(cin,str);

  MaxCharacter(str);

	return 0;



}