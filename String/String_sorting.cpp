
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.get();///To acesss character

	string s[1000];
	
	for(int i=0;i<n;i++){
		getline(cin,s[i]);///Take Input///getline --> to read Character 
	}
	sort(s,s+n);
	for (int i = 0; i < n; i++)
	{
		cout<<s[i]<<endl;
	}
	
	return 0;
}