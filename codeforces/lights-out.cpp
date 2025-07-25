// https://codeforces.com/problemset/problem/263/A

#include <iostream>
using namespace std;

int main ()
{
   int a[3][3];
   for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cin>>a[i][j];
    }
}
   int b[3][3];



for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        int total_toggles = 0;

        // 1. The press at (i, j) itself always affects light (i, j).
        total_toggles += a[i][j];

        if((i-1)>=0 && (i-1)<=2) total_toggles+=a[i-1][j];
        if((i+1)>=0 && (i+1)<=2) total_toggles+=a[i+1][j];

        if((j-1)>=0 && (j-1)<=2) total_toggles+=a[i][j-1];
        if((j+1)>=0 && (j+1)<=2) total_toggles+=a[i][j+1];

        if(total_toggles%2==0) b[i][j]=1;
        else b[i][j]=0;
    }

   
}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << b[i][j];
    }
    cout << endl;
}
    
}

