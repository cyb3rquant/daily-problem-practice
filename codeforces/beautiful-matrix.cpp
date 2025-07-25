// https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;

int main ()
{

   int a[5][5];
   for( int i =0; i< 5; i++){
    for( int j =0;j<5;j++){
        cin>>a[i][j];
    }
   }
int x=0,y=0;
   for( int i =0; i< 5; i++){
    for( int j =0;j<5;j++){
        if(a[i][j]==1){
            x=i;
            y=j;
        }
    }
   }

  int minmove_rows = abs(x-2);
    int  minmove_columns = abs(y-2);

      cout<< minmove_rows + minmove_columns;

    
}

