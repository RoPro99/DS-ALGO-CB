#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void spiral_print(int arr[][1000],int m,int n){
	int StartRow=0;
	int StartCol=0;
	int cnt=0;
	int total= m * n;
	while(StartRow < m and StartCol < n){
		if(cnt==total)
			break;
		//first col
		for(int i=StartRow;i<m;i++){
			cout<<arr[i][StartCol]<<" ";
			cnt++;
		}
		StartCol++;
		if(cnt == total)
			break;
		//last row
		for(int i=StartCol;i<n;i++){
			cout<<arr[m-1][i]<<" ";
			cnt++;
		}
		m--;
		if(cnt == total)
			break;
		///last col
		if(StartRow<m){
			for(int i=m-1;i>=StartRow;i--){
				cout<<arr[i][n-1]<<" ";
				cnt++;
			}
			n--;
		}
		if(cnt==total)
			break;
		//first row
		if(StartCol<n){
			for(int i=n-1;i>=StartCol;i--){
				cout<<arr[StartRow][i]<<" ";
				cnt++;
			}
			StartRow++;
		}
	}
}

		
int main(){
	int arr[1000][1000]={0};
	int m,n;
	cin>>m>>n;
	int val=1;
	for(int row=0;row <= m-1;row++){
		for(int col=0;col <= n-1;col++){
			arr[row][col]=val;
			val++;
			cin>>arr[row][col];

		}
	
	}
	spiral_print(arr,m,n);
	
	return 0;
}