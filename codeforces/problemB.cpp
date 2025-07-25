//

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back
typedef long long ll;
typedef vector<int> vecin;
typedef vector<ll> vecll;

void gcd(ll a, ll b);
vecll result;

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

        gcd(a, b);

        if (a / result[0] <= k && b / result[0] <= k)
        {
            cout << 1 << endl;
        }

        else
        {
            cout << 2 << endl;
        }
        result.erase(result.begin() + 0);

        t--;
    }
}

//--GCD of two numbers---
void gcd(ll a, ll b)
{
    ll m = max(a, b);
    ll n = min(a, b);
    if ((m - n) == 0)
    {
        result.push_back(n);
        return;
    }
    gcd(m - n, n);
}



