#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void spiral_print(int a[][1000],int m,int n){
	int StartRow=0;
	int StartCol=0;
	int EndRow=m-1;
	int EndCol=n-1;
	//Print it
	while(StartRow <= EndRow and StartCol <= EndCol){
		//first row
		for(int i=StartCol;i<=EndCol;i++){
			cout<<a[StartRow][i]<<" ";

		}
		StartRow++;
		//endcol
		for(int i=StartRow;i<=EndRow;i++){
			cout<<a[i][EndCol]<<" ";
		}
		EndCol--;
		//bottom row
		if(EndRow > StartRow){
		for(int i=EndCol;i>=StartCol;i--){
			cout<<a[EndRow][i]<<" ";
		}
		EndRow--;
		}
		//Startcol
		if(EndCol > StartCol){
		for(int i=EndRow;i>=StartRow;i--){
			cout<<a[i][StartCol]<<" ";
		}
		StartCol++;
		}

	}
}
int main(){
	int a[1000][1000]={0};
	int m,n;
	cin>>m>>n;
	int val=1;
	for(int row=0;row <= m-1;row++){
		for(int col=0;col <= n-1;col++){
			a[row][col]=val;
			val++;
			cout<<a[row][col]<<" ";

		}
		cout<<endl;
	}
	spiral_print(a,m,n);
	
	return 0;
}