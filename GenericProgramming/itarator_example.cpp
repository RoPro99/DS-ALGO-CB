#include<bits/stdc++.h>
#include<iostream>
#include<list>
using namespace std;
//Linear Search
//T=Let's make template
template<typename T>//Replace array and key with T
int linearsearch(T *arr,int n,T key){
	//linear search
	for(int i=0;i<n;i++){
		if(arr[i]==key){
		return i;
	}
}
	return -1;
}
template<class ForwardIterator,class T>
ForwardIterator linearsearch(ForwardIterator start,ForwardIterator end,T key)//ForwardIterator is return type

{
while(start!=end){
	if(*start==key){
		return start;
	}
	start++;

}
return end;
}


int main(){
list <int> l;
l.push_back(1);
l.push_back(2);
l.push_back(3);
l.push_back(4);
l.push_back(5);

auto it=linearsearch(l.begin(),l.end(),99);
if(it==l.end()){
	cout<<"Element Is Not Present"<<endl;
}
else{
	cout<<"Element Is Present At=>"<<*it<<endl;

}

	

return 0;
}