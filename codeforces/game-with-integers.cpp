
// https://codeforces.com/problemset/problem/1899/A

#include<bits/stdc++.h>
using namespace std;
#define ln '\n'

int main ()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while ( t>0){
    int n;
    cin>>n;
   bool vanyaWin = false;
   bool vovaWin = false;
    if(n%3==1 || n%3==2) vanyaWin = true;
    else if ( n%3==0) {
        vanyaWin =false;
    }



    if (vanyaWin==true) cout<<"First"<<ln;
    else cout<<"Second"<<ln;

    t--;
   }


   
}