#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,r,evensum=0,oddsum=0;
	cin>>n;
	
	while(n>0){
		r=n%10;
	    if(r%2==0){
		evensum = evensum + r;
        n /= 10;
	}
	else{
		oddsum = oddsum +r;
		n /= 10;
	}
}
	cout<<evensum<<endl;
	cout<<oddsum<<endl;
	return 0;
}