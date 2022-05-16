#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	vector<int> *vp = new vector<int>(); //created vector dynamically
	vector<int> v;//Statically
	v.push_back(10);//store 10
	v.push_back(20);//store  10 20
	v.push_back(30);//store 10 20 30
	v.push_back(40);//store 10 20 30 40

	v[1] = 200;//10 200 30 40
	v[4] = 300;//10 200 30 40 300//garbage value is printed
	v[5] = 500;//10 200 30 40 300 500//garbage value is printed
	v.push_back(23);//10 200 30 40 23
	v.push_back(55);//10 200 30 40  23 55

	v.pop_back();//delete last ele

	/* using For*/
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ",";
	}

	/*Dont use [] for inserting ele instead of use at()*/


	/*Normal*/
	// cout << v[0] << endl;
	// cout << v[1] << endl;
	// cout << v[2] << endl;
	// cout << v[3] << endl;
	// cout << v[4] << endl;
	// cout << v[5] << endl;
	// cout << v[6] << endl;
	// cout << v[7] << endl;

	// cout << "Size " << v.size() << endl;
	// cout << v.at(3) << endl;
	// cout << v.at(5) << endl;
	return 0;
}