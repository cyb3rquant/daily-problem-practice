
// https://codeforces.com/problemset/problem/808/A
#include<bits/stdc++.h>
using namespace std;
#define ln '\n'
int countDigits(int b);
int main ()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin>>n;
   int t;
   int c = countDigits(n);
   //cout<<c<<'\n';
   int firstDigit = n/pow(10,c-1);
   //cout<<firstDigit<<'\n';
   if(c==1) t= 1;
   else  t = ((firstDigit+1)*pow(10,c-1))-n;
    cout<<t<<'\n';
   
    //direct computation is much faster than running the loop 100 million times!

   


}



int countDigits(int b){
    if (b==0) return 1;
    int count=0;
    while( b!=0){
        b=b/10;
        count++;
    }
    return count;
}