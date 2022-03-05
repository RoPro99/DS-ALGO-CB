#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int **arr;
	int row,col;
	cin>>row>>col;
	///create an array in row heads
	arr = new int*[row];
	///creaet an 2d array
	for(int i=0;i<row;i++){
		arr[i] = new int[col];
	}
	///take  input and print
	int val=1;
	for (int i = 0; i < row; ++i){
	for (int j = 0; j < col; ++j)
	{
		arr[i][j]=val;
		val++;
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
	}
	return 0;
}