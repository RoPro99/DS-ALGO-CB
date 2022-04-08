#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
void display(int a[][1000],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
                                

}
// void rotate_image(int a[][1000],int n){
// 	//for reverse each row
	// for(int row=0;row<n;row++){
	// 	int StartCol=0;
	// 	int EndCol=n-1;
	// 	while(StartCol < EndCol){
	// 		swap(a[row][StartCol],a[row][EndCol]);
	// 		StartCol++;
	// 		EndCol--;
	// 	}
// 	}
// //for transpose the array
// 	for(int i=0;i<n;i++){
// 		for (int j = 0; j < n; j++)
// 		{
// 			if(i<j){
// 				swap(a[i][j],a[j][i]);

// 			}
// 		}
// 	}
	///another method using standard library
	void reversearray(int *a,int start,int end){
		for(int i=start,j=end;i<j;i++,j--){
			swap(a[i],a[j]);
		}

	} 
	void rotate_stl(int a[][1000],int n)
	{
	for(int i=0;i<n;i++){
	for (int j = 0; j < i; j++)
		{
			
				swap(a[i][j],a[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		reversearray(a[i],0,n-1);
	}
	

}

int main(){
	int a[1000][1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
		cin>>a[i][j];
	}
	//rotate_image(a,n);

	rotate_stl(a,n);
	display(a,n);

	return 0;
}