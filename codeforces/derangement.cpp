// https://codeforces.com/contest/2124/problem/A

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

        vector<int> a;
        a.resize(n);
        forn(i, n)
        {
            cin >> a[i];
        }

        vector<bool> duplicate;
        duplicate.resize(n);
        forn(i, n - 1)
        {
            if (a[i] == a[i + 1])
            {
                duplicate[i] = true;
            }
        }
        int count = 0;
        forn(i, n)
        {
            if (duplicate[i] == true)
            {
                a.erase(a.begin() + i);
                count++;
            }
            if (count > 1)
                break;
        }

        int size = a.size();

        vector<int> c;
        c.resize(size);
        forn(i, size)
        {
            c[i] = a[i];
        }

        sort(c.begin(), c.end());

        int dcheck = 0;
        forn(i, size)
        {
            if (c[i] != a[i])
                dcheck++;
        }

        if (dcheck == size)
        {
            cout << "YES" << ln;
            cout << size << ln;
            forn(i, size)
            {
                cout << a[i] << " ";
            }
            cout<<ln;
        }
        else {
            cout<<"NO"<<ln;
        }



        t--;
    }
}


/*
Initial Mistake: 

*/