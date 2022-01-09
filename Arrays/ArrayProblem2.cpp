#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){            /*Linear Search*/
	int n;
	cin>>n;
	int inp[100];
	for(int i=0;i<n;i++){
		cin>>inp[i];

	}
	int key,i;
	cin>>key;

	bool flag = false;

	for (int i = 0; i < n ; i++)
	{
		if(inp[i]==key){
			cout<<key<<" "<<"found at "<<i<<" "<<"index"<<endl;
			flag = true;
			return 0;
		}

	}

	if(flag==false){
		cout<<"-1"<<endl;
	}
	
		/* code */
	
	
	

}