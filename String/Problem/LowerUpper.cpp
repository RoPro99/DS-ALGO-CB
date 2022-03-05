#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	bool uppercase=false;
	bool lowercase=false;
		for(int i=0;a[i]!='\0';i++){
			int x = a[i];
			if(x>=65 && x<=96){
				uppercase = true;
			}
			else if (x>=97 && x<=122){
				lowercase = true;
			}
			else{
				break;
			}
		}

		if(uppercase){
			cout<<"UPPERCASE"<<endl;
		}
		else if (lowercase){
			cout<<"lowercase"<<endl;
		}
		else{
			cout<<"Invalid"<<endl;
		}
		
	
	return 0;
}