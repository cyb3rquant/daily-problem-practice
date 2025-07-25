// https://codeforces.com/problemset/problem/266/A

#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
   
   int n;
   char s[n];
for(int i = 0;i<n;i++){
    cin>>s[i];
}
   int c=0;
   for( int i = 0;i<n;i++){
    if( s[0]==s[1]){
        cout<< s[i];
        ++c;
    }
   }

}

