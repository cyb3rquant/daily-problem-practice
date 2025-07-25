// https://codeforces.com/problemset/problem/1873/C

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t > 0)
    {
        char a[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; i < 10; i++)
            {
                cin >> a[i][j];
            }
        }

        int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

        //1

            //upper rows
            for (int j = 0; j < 10; j++)
            {
                if (a[0][j]=='X') c1++;
            }

            for (int j = 0; j < 10; j++)
            {
                if (a[9][j]=='X') c1++;
            }

            //side columns
            for (int j = 1; j < 9; j++)
            {
                if (a[j][0]=='X') c1++;
            }

            for (int j = 1; j < 9; j++)
            {
                if (a[j][9]=='X') c1++;
            }

        //2
        //upper rows
        for (int j = 1; j < 9; j++)
        {
            if (a[0][j]=='X') c2++;
        }

        for (int j = 1; j < 9; j++)
        {
            if (a[9][j]=='X') c2++;
        }

        //side columns
        for (int j = 1; j < 9; j++)
        {
            if (a[j][1]=='X') c2++;
        }

        for (int j = 1; j < 9; j++)
        {
            if (a[j][8]=='X') c2++;
        }

       //2
        //upper rows
        for (int j = 1; j < 9; j++)
        {
            if (a[0][j]=='X') c2++;
        }

        for (int j = 1; j < 9; j++)
        {
            if (a[9][j]=='X') c2++;
        }

        //side columns
        for (int j = 1; j < 9; j++)
        {
            if (a[j][1]=='X') c2++;
        }

        for (int j = 1; j < 9; j++)
        {
            if (a[j][8]=='X') c2++;
        }

        //2
        //upper rows
        for (int j = 1; j < 9; j++)
        {
            if (a[0][j]=='X') c2++;
        }

        for (int j = 1; j < 9; j++)
        {
            if (a[9][j]=='X') c2++;
        }

        //side columns
        for (int j = 1; j < 9; j++)
        {
            if (a[j][1]=='X') c2++;
        }

        for (int j = 1; j < 9; j++)
        {
            if (a[j][8]=='X') c2++;
        }

        //2
        //upper rows
        for (int j = 1; j < 9; j++)
        {
            if (a[0][j]=='X') c2++;
        }

        for (int j = 1; j < 9; j++)
        {
            if (a[9][j]=='X') c2++;
        }

        //side columns
        for (int j = 1; j < 9; j++)
        {
            if (a[j][1]=='X') c2++;
        }

        for (int j = 1; j < 9; j++)
        {
            if (a[j][8]=='X') c2++;
        }



        

        t--;
    }
}