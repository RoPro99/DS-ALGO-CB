#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];/* code */
	}
// 	for (int i = 0; i < n; i++)

// 	{
// 		if(n%2!=0){
// 			input[i]=n;
// 			cout<<input[i]<<" ";
// 		}
// 		/* code */
// 	}
// 	for (int i = n-1; i < 0; i++)
// 	{
// 		if(n%2==0){
// 		input[i]=n;
// 		cout<<input[i]<<"";/* code */
// 	}
// }


	// shifting the odd elements one side based on the length of the array 
		int x = n/2;

		if ( n%2==0){
			int i=0;

			int odd=1;
			while(i<x){
				arr[i]=odd;
				odd+=2;
				i++;
			}

			int even =2;
			while(i<n){			
			arr[i]=even;
			even+=2;
			i++;
		}
	}
	 else {
	 	int i=0;

	 	int odd=1;
	 	while(i< x+1){
	 		arr[i]=odd;
	 		odd+=2;
	 		i++;
	 	}

	 	int even = 2;
	 	while(i<n){
	 		arr[i]=even;
	 		even+=2;
	 		i++;
	 	}
	 }

	 for (int i = 0; i < n; ++i)
	 {
	 	cout<<arr[i]<<" ";
	 }

	// shifting the remaining even elements based on the length of the array
	
	return 0;
}