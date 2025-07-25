// https://codeforces.com/problemset/problem/1859/A

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

        //-------inputting arrary a-------//
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        //-------sort-------//

        sort(a, a + n);

        //-------check if all elements are same-------//
        int allSameCheck = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[0] == a[i + 1])
                allSameCheck++;
        }

        if (allSameCheck + 1 == n)

        //-------[BETTER WAY] check if all elements are same-------//
        /*

        if (a[0] == a[n - 1]) {
        cout << -1 << ln;
        continue;
        }

        */
        {
            cout << -1 << ln;
        }

        else
        {
            //-------making of b and c-------//
            int flagIndex = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] / a[i + 1] == 0)
                {
                    flagIndex = i;
                    break;
                }
            }

            //-------MAJOR BREAKTHROUGH-------//
            int Lb = flagIndex + 1; //<----------|
            cerr << Lb << ln;
            int Lc = n - Lb;
            int b[Lb], c[Lc];
            for (int i = 0; i < Lb; i++)
            {
                cerr << a[i] << ln;
                b[i] = a[i];
            }

            for (int i = 0; i < Lc; i++) // was looping till n instead of Lc
            {
                c[i] = a[flagIndex + 1 + i];
            }

            //-------printing results-------//

            cout << Lb << " " << Lc << ln;

            for (int i = 0; i < Lb; i++)
            {
                cerr << b[i] << ln;
                cout << b[i] << " ";
            }
            cout << ln;

            for (int i = 0; i < Lc; i++)
                cout << c[i] << " ";
            cout << ln;
        }
        t--;
    }
}
