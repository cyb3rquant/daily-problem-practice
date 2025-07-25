// https://codeforces.com/contest/2108/problem/A




#include<bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i,n) for(int i =0;i<n;i++)
typedef long long ll;
int main ()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int t;
   cin>>t;
   while(t>0){
      int n;
      cin>>n;
      int a[n];

      for(int i =0;i<n;i++){
         a[i]=i+1;
      }
      int sum =0;

    for(int i =1;i<=n;i++){
      sum += abs(a[n-i]-i);
    }

    int val = (sum/2 )+ 1;
    cout<<val<<ln;



    







//2,4,8,12,18,24,32
//2,3            17


    t--;
   }
   
   
}