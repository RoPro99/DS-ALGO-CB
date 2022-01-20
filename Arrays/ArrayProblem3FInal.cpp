#include<bits/stdc++.h>
#include<iostream>
using namespace std;/*ARRAY ARRANGE NUMBER*/
void arrange(int *arr, int n);
int main(){
	
	int n;
	cin>>n;

	int *arr = new int[n];

	arrange(arr,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<< " ";
	}
	delete [] arr;
}

void arrange(int *arr, int n)
{
	int left = 0;
	int right = n - 1;
	int counter = 1;
	while (left <= right)
	{
		if (counter % 2 == 1)
		{
			arr[left] = counter;
			counter++;
			left++;
		}
		else
		{
			arr[right] = counter;
			counter++;
			right--;
		}
	}
}