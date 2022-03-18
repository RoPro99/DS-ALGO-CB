#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	    int n;
		int a[100000];
		cin>>n;
		int no;
		int x = 0;
		for(int i=0;i<n;i++){
		   cin>>no;
		   a[i] = no;
		   x = x^no;
		// xor = a^b;
		int temp = x;
		int pos = 0;
		while((temp&1)==1){
			pos++;
		   temp = temp>>1; 
		   	int mask = (1<<pos);
			//find those numbers which contain set bit at position pos
			int x1 = 0; 
			int y = 0;
			for(int i=0;i<n; i++){
			   if((a[i]&mask) >0){
			       x1 = x1^a[i];
			y = x1^x1;
			cout<<min(x1, y)<<" "<<max (x1,y)<<endl;
		}
	}
}
}
			return 0;

}