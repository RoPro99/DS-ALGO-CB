#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int compare(string x,string y){
	string xy=x.append(y);
	string yx=y.append(x);
	return xy.compare(yx)>0 ? 1:0;
}
void largetnumber(vector<string> arr){
	sort(arr.begin(),arr.end(),compare);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i];
	}
}
int main(){
	vector<string> arr;
	arr.push_back("54");
	arr.push_back("546");
	arr.push_back("548");
	arr.push_back("60");
	largetnumber(arr);
	return 0;
}