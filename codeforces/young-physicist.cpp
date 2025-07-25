// https://codeforces.com/problemset/problem/69/A

#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int size = n *3;
    int a[size];
    for( int i = 0; i <size;i++){
        cin>>a[i];
    }
    int s1 = 0; 
    for ( int i = 0 ; i<size; i+=3){
        s1+= a[i];
    }
    int s2 = 0; 
    for ( int i = 1 ; i<size; i+=3){
        s2+= a[i];
    }

    int s3 = 0; 
    for ( int i = 2 ; i<size; i+=3){
        s3+= a[i];
    }

     if (s1==0 && s2==0 && s3==0) cout<<"YES";
     else cout<<"NO";
}

