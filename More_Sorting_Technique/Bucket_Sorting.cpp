#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//step 1 Crete a class of student
class Student
{
public:
	int marks;
	string name;
};
//bucket sort to sort an array od student
void Bucket_Sort(Student s[],int n){
	//assuming range from 0-101
	//create vector
	vector<Student> v[101];
	for(int i=0;i<n;i++){
		int m=s[i].marks;//fetched both marks and name of student
		v[m].push_back(s[i]);
	}
	///Iterate over vector and print the Students
	for(int i=100;i>=0;i--){
		for(vector<Student>::iterator it=v[i].begin();it!=v[i].end();it++){
			cout<<(*it).marks<<"--"<<(*it).name<<endl;
		}
	}
}



int main(){
	Student s[100000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].marks>>s[i].name;
	}
	Bucket_Sort(s,n);
	return 0;
}