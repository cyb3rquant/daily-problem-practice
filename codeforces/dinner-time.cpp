// https://codeforces.com/contest/2102/problem/0

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
        int n, m, p, q;
        cin >> n >> m >> p >> q;

        if (n % p == 0)
        {
            if (m == (n / p) * q)
                cout << "YES" << ln;
            else
                cout << "NO" << ln;
        }
        else
        {
            cout << "YES" << ln;
        }

        t--;
    }
}