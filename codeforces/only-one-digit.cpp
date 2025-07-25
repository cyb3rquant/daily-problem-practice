// https://codeforces.com/contest/2126/problem/0

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
        int n;
        cin>>n;
        
        //---counting the number of digits in n---

        int digicheck = n;

        int c = 0;
        while (digicheck > 0)
        {
            digicheck = digicheck/10;
            c++;
        }


        vecin store;
        //---individual digit extract---
        int temp, individualDigit;

        for (int i = 1; i <= c; i++)
        {
            temp = n % (int)pow(10, i);
            individualDigit = temp / (int)pow(10, i - 1);
            store.push_back(individualDigit);
        }

        cout << *min_element(store.begin(), store.end()) << ln;

        t--;
    }
}