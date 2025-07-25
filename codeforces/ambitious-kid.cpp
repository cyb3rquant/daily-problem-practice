
// https://codeforces.com/problemset/problem/1899/A

#include<bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i,n) for(int i =0;i<n;i++)

int main ()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin>>n;
   int a[n];
   forn(i,n){
    cin>>a[i];
   }
 int b[n];
   forn(i,n){
    b[i] = abs(a[i]);
   }

   int l = sizeof(b)/sizeof(b[0]);

   sort(b,b+l);

   cout<<b[0];


   
}