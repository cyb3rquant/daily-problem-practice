// https://codeforces.com/problemset/problem/69/A

#include<bits/stdc++.h>
using namespace std;

int main ()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s;
   cin>>s;
   if(s[0] >= 'a' && s[0]<='z') s[0] = s[0] - 32;
   
   cout<<s;
}

/*
Earlier code :

#include <iostream>
using namespace std;

int main ()
{
   char s[1000]; // C-style character array
   // Problematic Input Loop:
   for( int i =0; i<1000;i++) cin>>s[i];

   // Capitalization Logic (Correct in principle):
   if(s[0] >= 'a' && s[0]<='z') s[0] = s[0] - 32;

   // Output:
   cout<<s;
}

Reason for garbage values in output leading to wrong answer :

Furthermore, C-style strings (char[]) need a special null terminator character (\0)
at the end so functions like cout know where the string ends. Your loop doesn't add this terminator. 
cout << s; would print the characters you read and potentially garbage data after 
them until it happens to find a null byte somewhere in memory, 
leading to Wrong Answer (WA) if it didn't TLE first.

*/