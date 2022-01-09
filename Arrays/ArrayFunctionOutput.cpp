#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void increament(int a,int b[],int n){
	a++;
	b[0]++;

}
int main(){
	int a=10;
	int b[10]={1,2,3};
	increament(a,b,10);
	cout<<"a:"<<a<<endl;
	cout<<"b[0]:"<<b[0]<<endl;
	
	return 0;
}