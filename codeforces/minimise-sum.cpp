// https://codeforces.com/contest/2124/problem/B

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
        int n;
        cin >> n;

        vector<ll> a;
        a.resize(n);

        forn(i, n)
        {
            cin >> a[i];
        }

        // normal

        ll normalsum = 0;
        forn(i, n)
        {
            vector<ll> temp;
            forn(j, i)
            {
                temp.resize(i);
                temp[j] = a[j];
                sort(temp.begin(), temp.end());
            }
            normalsum += temp[0];
        }

        // operation
        forn(i, n)
        {
            ll big = 0;
            if (a[i] > big)
            {
                big = a[i];
            }
        }
        cout << min(normalsum, operatedsum) << ln;
        t--;
    }
}