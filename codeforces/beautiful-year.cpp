// https://codeforces.com/problemset/problem/32/B

#include <iostream>
#include <string.h>

using namespace std;

int checkDistinct(int n);
int main ()
{
   int y;
   cin>>y;
   //cout<<checkDistinct(y);
//    for(int i =0;checkDistinct(y)==false;i++){
//     y+=i;
//    }
//    cout<<y;
do{
    ++y;
}while(checkDistinct(y)==0);
   cout<<y;
}

int checkDistinct(int n)
{
    string s = to_string(n);
    int c=0;
    // if(s[0]!=s[1]!=s[2]!=s[3]) return 2;
    // else return 0;
    for(int i =0; i<4;i++){
        for( int j =i+1; j<4;j++){
            if(s[i]==s[j]) {
                c++;
                //cout<<c<<endl;
            }
        }
    }
    // cout<<c<<endl;
    if(c>0)return 0;
    else return 1;
}
