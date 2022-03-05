#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	vector<int>d{1,2,30,40,60};
	d.push_back(70);//method--1[adding extra element in the end]
	d.pop_back();//method--2[delete last element from array]
	d.insert(d.begin()+3,4,100);//method--3[adding element in the middle of an arrayEx--1,2,30,10,10,10,10,40,60]
	d.erase(d.begin()+2);//method--4[delete element in the middle of an array]
	cout<<d.size();//method--5[tells the size of array]
	d.front();//method--6[shows first element in array Example--1]
	d.back();//method--7[shows last element in array Example--60]
	d.clear();//method--8[clear all the array]
	for(int x:d){
		cout<<x<<", ";
	}
	cout<<endl;
	return 0;
}