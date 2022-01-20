#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void readLine(char *a,int maxLength,char delim='\n'){
	int i=0;
	char ch = cin.get();
	while (ch != delim){
		a[i] = ch;
		i++;
		if (i==(maxLength-1)){
			break;
		}
		ch=cin.get();
	}
	//once out of loop
	a[i]='\0';
	return;

}



int main(){
	char a[1000];
	
	///readLine(a,1000,'$');//or
	cin.getline(a,1000,'$');
	cout<<a<<endl;
	
	return 0;
}