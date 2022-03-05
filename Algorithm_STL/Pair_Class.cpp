#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	pair<int,char> p;
	p.first=99;
	p.second='R';

	////another way 
	pair<int,char>p2(p);
	cout<<p2.first<<endl;
	cout<<p2.second<<endl;
	
	////for string
	pair<int,string> p3 = make_pair(99,"Rohan");
	cout<<p3.first<<", "<<p3.second<<endl;



	return 0;
}