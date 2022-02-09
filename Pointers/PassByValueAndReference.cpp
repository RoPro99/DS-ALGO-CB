#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Pass By Value
void increament(int a){
	a++;
	cout<<"Inside My Function:"<<a<<endl;
}



int main(){
	int a=10;
	increament(a);
	cout<<"Inside Main:"<<a<<endl;
	return 0;
}