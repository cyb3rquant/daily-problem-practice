// https://codeforces.com/problemset/problem/1858/A




#include<bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i,n) for(int i =0;i<n;i++)

int main ()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t>0){

    int a,b,c,totalA,totalK;
    cin>>a>>b>>c;
    if ( c%2==0){
         totalA = a + (c/2);
     totalK = b + (c/2);

    }
    else {
     totalA = a + (c/2)+1;
     totalK = b + (c/2);
    }

if( totalK==totalA || totalK> totalA) cout<<"Second"<<ln;
else if ( totalA> totalK) cout<<"First"<<ln;










    t--;
   }
   
   
}