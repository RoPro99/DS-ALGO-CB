#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int arr[1000][1000]={0};
	int m,n;
	cin>>m>>n;
	for(int rows=0;rows<=m-1;rows++){
		for(int cols=0;cols<=n-1;cols++){
			cin>>arr[rows][cols];
		}
	}

//Wave Print
	for(int cols=0;cols<n;cols++){
		if(cols%2==0){
			//Even Col---Top Down
			for(int rows=0;rows<m;rows++){
				cout<<arr[rows][cols]<<" ";
			}
		}
		else{
			//Botttom UP
			for(int rows=m-1;rows>=0;rows--){
				cout<<arr[rows][cols]<<" ";
			}
		}
	}
	return 0;
}
	