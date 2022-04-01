#include <bits/stdc++.h>

using namespace std;

void MaxCharacter(string &str){

// make a frequency array for all the alphabets

// with index zero

int freq[26] = {0};

// construct character count array from input string

int len = str.length();

int max = 0;

char result; //intitiliaze the result
// traverse through the string for mapping

for(int i=0;i<len;i++){

    freq[str[i]-'a']++;

    if(max<freq[str[i]-'a']){

        max = freq[str[i]-'a'];

        result= str[i];

    }

}

cout<<result;
}

int main() {

string str;

getline(cin, str);

    

MaxCharacter(str);
return 0;

}