#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int matrix_sum(int arr[][n]){
	int sum=0;
	for(int li=0;li<n-1;li++){
		for(int lj=0;lj<n-1;lj++){
			for(int bi=li+1;bi<n-1;bi++){
				for(int bj=lj+1;bj<n-1;bj++){
					for(int i=li;i<bi;i++){
						for(int j=lj;j<bj;j++){
							sum += arr[i][j];
						}
						cout<<sum<<endl;
					}
				}
			}
		}
	}

}


int main(){
	int n;
	cin>>n;
	int arr[][n]={{1,2,3},
				  {4,5,6},
				  {7,8,9}
						}
	
	return 0;
}