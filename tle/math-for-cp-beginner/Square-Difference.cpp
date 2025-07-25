// https://codeforces.com/problemset/problem/1033/B

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

        ll a, b;
        cin >> a >> b;

        ll p = a + b;

        //----Prime-Check----
        bool isPrime = true;
        for (int i = 2; i <= sqrt(p); i++)
        {
            if (p % i == 0)
                isPrime = false;
        }

        // if(isPrime) cout<<"PRIME"<<ln;
        // else cout<<"NOT PRIME"<<ln;

        if ((a - b) == 1 && isPrime == true)
            cout << "YES" << ln;
        else
            cout << "NO" << ln;

        t--;
    }
}