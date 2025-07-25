// https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
typedef vector<int> vecin;
typedef vector<ll> vecll;

void luckygen(int currentlucky);
vecin luckytilln;
int n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    luckygen(4);
    luckygen(7);

    int digicheck = n;
    int c = 0;
    while (digicheck > 0)
    {
        digicheck /= 10;
        c++;
    }

    bool divluckyany = false;
    for (int i = 0; i < luckytilln.size(); i++)
    {
        if (n % luckytilln[i] == 0)
            divluckyany = true;

    }

    // forn(i, luckytilln.size()){
    //     cout<<luckytilln[i]<<" ";
    // }
    // cout<<ln;

    bool divlucky = false;
    if (n % 4 == 0 || n % 7 == 0)
        divlucky = true;

    if (divlucky == true || divluckyany == true)
        cout << "YES" << ln;
    else
        cout << "NO" << ln;
}

void luckygen(int currentlucky)
{
    if (currentlucky <= n)
        luckytilln.push_back(currentlucky);
    if(currentlucky>n) return;
    
        luckygen(currentlucky * 10 + 4);
        luckygen(currentlucky * 10 + 7);

        
    
}

/*
mistake: didnt check the divisibility by all possible lucky numbers.
mistake: forgot to stop the recursion after the base case(s) is satisfied.
*/