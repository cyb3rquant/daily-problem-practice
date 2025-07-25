// https://codeforces.com/contest/2104/problem/A




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
    int a ,b,c;
    cin>>a>>b>>c;
    if((a+b+c)%3==0){
    int x = (2*c -(a+b))/3;
    int k = c-x;

   
   

   
    //cout<<k<<ln;
    if(k<b) cout<<"NO"<<ln;
    else cout<<"YES"<<ln;
    }
    else
    cout<<"NO"<<ln;

    










    t--;
   }
   
   
}