#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	// Normal Array int a[5][3]={0};
	//Below 2d Array Input
	int a[1000][1000]={0};
	int m,n;
	cin>>m>>n;
	//Iterate Over
	int val=1;
	for (int rows = 0; rows <= m-1; rows++)
	{
		for(int cols =0;cols<=n-1;cols++){
			a[rows][cols]=val;
			val++;
			cout<<a[rows][cols]<<" ";
		}
		cout<<endl;
		
	}
	//Wave Print
	for(int cols=0;cols<n;cols++){
		if(cols%2==0){
			//Even Col---Top Down
			for(int rows=0;rows<m;rows++){
				cout<<a[rows][cols]<<" ";
			}
		}
		else{
			//Botttom UP
			for(int rows=m-1;rows>=0;rows--){
				cout<<a[rows][cols]<<" ";
			}
		}
	}
	return 0;
}