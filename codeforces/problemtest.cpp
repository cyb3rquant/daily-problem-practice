




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
    int n;
    cin >> n;
    int t;
    cin >> t;
    while (t > 0)
    {

void gcd(int a, int b);
//--GCD of two numbers---
void gcd(int a, int b)
{
    int m = max(a, b);
    int n = min(a, b);
    if ((m - n) == 0)
    {
       result.push_back(n);
        return;
       
    }
    gcd(m - n, n);
}
 vecin result;


        t--;
    }
}