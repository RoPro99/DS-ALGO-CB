#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool ratMaze(char maze[10][10],int matrix[][10],int i,int j,int m,int n){
	//Base case
	if(i==m && j==n){
		matrix[m][n]=1;
		///Print the path
		for(int i=0;i<=m;i++){
			for(int j=0;j<=n;j++){
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}
	//recursive case
	//Rat should always inside the grid
	if(i>m || j>n){
		return false;
	}
	if(maze[i][j]=='X'){
		return false;
	}
	//Assume cell exist
	matrix[i][j]=1;//if we continue or run then 1
	bool RightSuccesor=ratMaze(maze,matrix,i,j+1,m,n);
	bool DownSuccesor=ratMaze(maze,matrix,i+1,j,m,n);
	//backtracking
	matrix[i][j]=0;//if we found a block and could'nt continue then 0


	//IF we get both right and down correct then retun true
	if(RightSuccesor||DownSuccesor){
		return true;
	}
	return false;

}


int main(){
	char maze[10][10]={
		         "0000",
		         "00X0",
		         "000X",
		         "0X00",
	};
	int matrix[10][10]={0};
		int m=4;
		int n=4;
	bool ans=ratMaze(maze,matrix,0,0,m-1,n-1);
	if(ans==false){
		cout<<"Path Does't Exist TRY AGAIN!!!0"<<endl;
	}
	return 0;
}