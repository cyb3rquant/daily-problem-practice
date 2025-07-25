//

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

        ll l, r, k;
        cin >> l >> r >> k;

        ll countOfOddNumbers = ((1 + r) / 2) - ((1 + l - 1) / 2);

        if (l == r && r != 1)
        {
            cout << "YES" << endl;
        }

        else if (r == 1)
        {
            cout << "NO" << endl;
        }

        else if (countOfOddNumbers <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        t--;
    }
}

/*-------[LEARNINGS]-------

When a problem asks "is it possible...", always ask yourself: "What is the weakest condition
 I need to satisfy? What is the easiest way to get a YES?"

Problem: B. GCD Arrays (AtCoder)
Core Task: Given a range [l, r], 
can we make the GCD of the array > 1 by performing at most k operations (remove x, y -> insert x*y)?

Key Learnings & Insights:

Simplify the Goal: The request is "can the GCD be > 1", not "what is the max GCD".
 This means I only need to find one possible divisor d > 1 that works. 
 The easiest case to check is d=2 (making all numbers even), as this requires eliminating 
 the fewest "bad" numbers (the odds).

Analyze the Operation's Essence: The operation x*y cannot create new prime factors. 
This means the final common divisor d must have its prime factors present in the initial array. 
This confirms that eliminating "bad" numbers (those not divisible by d) is the only way forward.

Isolate Edge Cases: My general strategy of eliminating odd numbers failed for the case l == r.
Lesson: Always test a general strategy against boundary conditions (l=r, k=0, l=1).
 These often require a separate, simpler if block before the main logic. 
 For l=r, the answer is YES if l>1 and NO if l=1, no operations needed.

Use Math for Large Ranges: A loop from l to r is too slow for large inputs (10^9). 

To count elements with a certain property in a range [l, r],
 use the formula: count(l, r) = count(1, r) - count(1, l-1).
Count of odds in [1, x]: (x+1)/2
Count of multiples of d in [1, x]: x/d


-----------------------------------------------------------------------------*/