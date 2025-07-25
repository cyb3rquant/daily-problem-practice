// https://codeforces.com/problemset/problem/1337/A

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
typedef vector<int> vecin;
typedef vector<ll> vecll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t > 0)
    {

        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x = (a + b) / 2;
        ll y = (b + c) / 2;
        ll z = (c + d) / 2;

    
        cout << x << " " << y << " " << z << endl;
        t--;
    }
}

/*
  //  cout << b << " " << c << " " << c << endl;
3 4 5
5 5 5
4

 // ll a[n];
        // for (int i = 0; i <n; i++)
        // {
        //     cin >> a[i];
        // }

        // ll x = a[1];
        // ll y, z;
        // y = a[2];
        // z = a[2];

        //
        // cout << endl;

*/