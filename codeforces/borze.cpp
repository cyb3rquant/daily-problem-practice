// https://codeforces.com/problemset/problem/32/B

#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
   string s;
   cin>>s;
    int n = s.length();
   for(int i = 0; i< n; i++){
    if(s[i]=='.')cout<<0;
    else if ( s[i]=='-' && s[i+1]=='.') {cout<<1;
    i+=1;}
    else if ( s[i]=='-' && s[i+1]=='-') {cout<<2;
   i+=1; }
   }
}

