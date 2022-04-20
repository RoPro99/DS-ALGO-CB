#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int n;

	getline(cin, s);

	n = s.size(); //here i have calculated the string length i.3 in this sample input case

//cout<<n;

	int l = 0; //we have taken two variables so that we can do increment subtract the ascii value of precedding letter from the letter .
	int r = 1;
	cout << s[l]; //we have first printed the letter of the string
	for (int i = 0; i < n - 1; i++) { //we are running the loop for less than n-1 times because we are also maintaing one variable which is running for i+1 th oisition so for the last letter i.e n-1 th letter that will work . and we are doing this because as we dint have any letter after n-1 th letter .

		int k = s[r] - s[l]; //here l is zero and r is 1 that means r is pointing to letter 'c' and l is pointing to letter a and ascii value of c is 97 and ascii value of c is 99 so 99 - 97 is 2
		cout << k; // it willl print 2 here .
		cout << s[r]; // you will display the preceeding letter i.e c

		l = r; //we will increment the letters by 1 .here you can directly increment as well .
		r = l + 1; //r is being incremented by 1 .

	}//this process is being repeated for n-1 times where n is the length of the string .


	return 0;
}