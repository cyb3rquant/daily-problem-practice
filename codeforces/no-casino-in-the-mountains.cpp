// https://codeforces.com/contest/2126/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
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
        int n, k;
        cin >> n >> k;

        vecin days(n);
        bool allZero = true;

        for (int i = 0; i < n - k; i++)
        {
            for (int j = i; j < i + k; j++)
            {
                if (days[j] != 0)
                {
                    allZero = false;
                    i = j;
                    break;
                }
            }
        }

        if (allZero) hikecou
    }
}

/*
rain => ai = 1; weather good => ai = 0

time_hike  = k ; ai = 0


/-------[C++ STL - `set` and Usage in Code]-------




* **`set<int>`** stores **unique integers in sorted order**. Useful to track distinct values like indices already used.
* **`.insert(x)`** adds `x` to the set. If `x` is already present, nothing changes.
* **`.find(x)`** returns an **iterator** to `x` if found, else it returns `.end()`.
* **Usage of `.find()` with `.end()`**:

  * `used.find(x) != used.end()` → `x` **is present** in the set.
  * `used.find(x) == used.end()` → `x` **is not present**.
* Practical use: Preventing repeated operations on the same indices in loops by **checking if an index is already used**.
* Example usage:

  ```cpp
  if (used.find(i) != used.end()) continue; // skip if i already used
  ```
* Sets provide **O(log n)** time complexity for `insert`, `find`, and `erase`.

---

Let me know if you'd like to add context like the specific problem you were solving.

-----------------------------------------------------------------------------


