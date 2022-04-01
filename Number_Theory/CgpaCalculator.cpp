#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3,s4,s5,s6,s7,s8;
	int marks_obtained;
	cin>>s1;
	cin>>s2;
	cin>>s3;
	cin>>s4;
	cin>>s5;
	cin>>s6;
	cin>>s7;
	cin>>s8;
 
 int total = s1+s2+s3+s4+s5+s6+s7+s8;
 cout<<"total marks"<<total<<endl;
 cout<<"enter out of marks"<<endl;
 cin>>marks_obtained;
 float aggregate = total/marks_obtained;
 cout<<"Total Aggegration Marks"<<aggregate<<endl;
 ///calculaet cgpa
 float cgpa = (aggregate/10)+0.75;
 cout<<"CGPA"<<cgpa<<endl;
 


	return 0;
}