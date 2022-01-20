#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rohan_magical_park(char a[][1000],int m,int n,int k,int s){
		bool succes=true;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				char ch=a[i][j];
				//check
				if (s<k){
					succes=false;
					break;
				}
				//check for others
					if(ch=='*'){
						s += 5;
					}
					else if(ch=='.'){
						s -=2;
					}
					else{
						break;
					}
					//we also use 1 point when we move right except the last column
					if(j!= n-1){
						s--;

					}

				
			}
		}
		if(succes){
			cout<<"YES"<<endl;
			cout<<s<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
	int main(){
		int m,n,k,s;
		cin>>m>>n>>k>>s;
		char park[1000][1000]; 
		//Take Input
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>park[i][j];
			}
		}
		rohan_magical_park(park,m,n,k,s);

	
	return 0;
}