  #include<bits/stdc++.h>
  #include<iostream>
  using namespace std;
  void permutation(char *in, int i){
  	//Base casse
  	if(in[i]=='\0'){
  		cout<<in<<", ";
  		return;
  	}
  	//Recursive case
  	for(int j=i;in[j]!='\0';j++){
  		swap(in[i],in[j]);
  		permutation(in,i+1);

  		//Backtracking - To Resotre The origional array
  		swap(in[i],in[j]);
  	}
  }
  int main(){
  	char in[100];
  	cin>>in;

  	permutation(in,0);
  	return 0;
  }