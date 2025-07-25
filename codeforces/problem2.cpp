// https://codeforces.com/contest/2125/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back
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

        ll a, b, k;
        cin >> a >> b >> k;
        ll dx, dy;

        if (a > k)
        {
            dx = a - k;
        }
        else
        {
            dx = a;
        }

        if (b > k)
        {
            dy = b - k;
        }
        else
        {
            dy = b;
        }

        ll diffA = a - dx;
        
        while (diffA > 0)
        {
            diffA--;
        }

        t--;
    }
}