// https://codeforces.com/contest/2125/problem/A

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
        string s;
        cin >> s;
        int l = s.length();

        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        cout << s << endl;

        cout << endl;

        t--;
    }
}