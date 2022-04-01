#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n,m;
	cin>>n;
	int a[1005];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	int b[1005];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	int arr[1000];
	int x = m>n?m:n;
	int t = x;
    vector<int>v;
	int c=0;
	while(n>=0 and m>=0){
		int sum = a[n-1]+b[m-1]+c;
		if(sum){v.push_back(sum%10 );}
		c = sum/10;
		n--;
		m--;
		x--;
	}
    if(c){
        v.push_back(c);
    }
    reverse(v.begin(),v.end());
	//cout<<x<<" "<<m<<" " <<n<<" "<<t<<endl;
	// if(m==-1 && n==-1){
	// 	// if(c>0){
	// 	// 	cout<<c<<", ";
	// 	// }
	// }else if(x==m){
	// 	for(int i=x;i>=0;i--){
	// 		arr[i] = b[i] + c;
	// 		c=0;
	// 	}
	// }else{
	// 	for(int i=x;i>=0;i--){
	// 		arr[i] = a[i] + c;
	// 		c=0;
	// 	}
	// }
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<", ";
	}
	cout<<"END";
	return 0;
}