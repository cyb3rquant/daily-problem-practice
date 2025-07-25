
#include <vector>
#include <algorithm>
#include <iostream>
#include <string.h>
#include<string>
using namespace std;



int main ()
{
    int t;
    cin>>t;
    for( int r=0; r<t;r++){

   string s;
   cin>>s;
   string b = "9876543210";
   sort(s.begin(),s.end());
string result="";
for( int i =0; i<10;i++){
char d= b[i];
for(int j =0; j<10; j++){
    if(s[j]>=d){result +=s[j];
    s.erase(j,1);
    }

}

}
cout<<result<<endl;


}
}
    


