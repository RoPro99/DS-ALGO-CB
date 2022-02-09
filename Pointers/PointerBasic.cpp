#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int x=10,y=20;

	///pointer declaration
	int *xptr;
	///Storing the address of variable
	xptr=&x;
	cout<<xptr<<endl;
	///You can Re-Assign Another Variable
	xptr=&y;
	cout<<xptr<<endl;
	return 0;
}