#include<bits/stdc++.h>
#include<iostream>
#include<list>
using namespace std;
int main() {
	//init
	list<int> l;
	//init 2
	list<int> l1{1, 2, 3, 4, 5, 6};

	//init 3
	list<string> l2{"ro", "pro", "shu", "div"};
	l2.push_back("ahru");//adding shru in l2

	//sort
	l2.sort();

	//reverese
	l2.reverse();

	//front delete
	cout << l2.front() << endl;
	l2.pop_front();//delete first element in list

	l2.push_front("sak");//push front(pahela) in list
	cout << l2.back() << endl;
	l2.pop_back();//delete last element in list
	string f;
	cin >> f;
	l2.remove(f);//remove a element from list

	//iterator
	for (auto s : l2) {
		cout << s << "-->";
	}
	return 0;
}