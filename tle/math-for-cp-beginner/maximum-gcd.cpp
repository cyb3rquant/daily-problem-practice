// https://codeforces.com/problemset/problem/1370/A

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
typedef long long ll;
typedef vector<int> vecin;
typedef vector<ll> vecll;


int main()
{

    int t;
    cin>>t;
    while(t>0){

        int n;
        cin>>n;

        cout<<n/2<<ln;
        t--;
    }
    
    
}


/*
MATH CONCEPT:

Based on our discussion about the maximum GCD property, here's a summary for your learning journal:

## **Mathematical Insight: Maximum GCD Property**

### **Core Concept**
For any two distinct integers a and b where 1 ≤ a < b ≤ n, the **maximum possible GCD(a,b) is ⌊n/2⌋**.

### **Key Learning Points**

**1. Mathematical Proof Structure:**
- **Upper Bound Analysis**: If GCD(a,b) = d, then a = d×k₁ and b = d×k₂ where GCD(k₁,k₂) = 1
- **Constraint**: Since b ≤ n and the smallest valid pair has k₁=1, k₂=2, we get b = 2d ≤ n
- **Conclusion**: Therefore d ≤ n/2

**2. Constructive Proof:**
- The maximum is **achievable** using the pair (⌊n/2⌋, 2×⌊n/2⌋)
- This pair always satisfies our constraints and gives GCD = ⌊n/2⌋

**3. Practical Examples:**
| n | Max GCD | Optimal Pair | Verification |
|---|---------|--------------|-------------|
| 10 | 5 | (5, 10) | GCD(5,10) = 5 ✓ |
| 9 | 4 | (4, 8) | GCD(4,8) = 4 ✓ |

### **Competitive Programming Application**
- **Problem Type**: GCD optimization problems
- **Solution**: Direct formula ⌊n/2⌋ instead of complex factorization
- **Time Complexity**: O(1) vs O(√n) for factor-finding approaches

### **Key Insight**
This elegant mathematical property shows that **half of any number** (rounded down) 
represents the theoretical maximum for GCD problems in constrained ranges—a powerful 
simplification for competitive programming scenarios.


----------------------------------------------------------

NEW CONCEPT: max_element() is used to find the maximum value in a vector

std::max_element(v.begin(), v.end()); // v is the vector here


//------- EXAMPLE -------

// C++ program to find maximum element
// in vector using std::max_element()
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 4, 1, 5, 3};

    // Finding the maximum element in vector
    // using std::max_element()
    cout << *max_element(v.begin(), v.end());
    return 0;
}


output = 5

// another way to find biggest number :
- use sort( v.begin(),v.end());
- then output v[n-1];  n is the size of vector v


# mistake: forgot that max_element() returns an iterator,
so I must use * to get the actual value.


UNIQUE APPROACH : faster approach to generate the factors of a number uses the
observation that factors come in pairs.

For example, if n = 36, and i = 2 is a factor, then 36 / 2 = 18 is also a factor.
So, you only need to check up to the square root of n to find all factor pairs.

#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    set<int> factors;  // Using set to store unique factors in sorted order

    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            factors.insert(i);        // i is a factor
            factors.insert(n / i);    // n / i is also a factor
        }
    }

    cout << "Factors of " << n << " are: ";
    for (int f : factors) {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}



/----- NEW CONCEPT -----

**Set in C++ — Core Concepts Summary**

- **Definition:** A set is an STL container that stores **unique elements** in **sorted order**.
- **Usage:** Guarantees no duplicates and automatic sorting (ascending by default).
- **Efficiency:** Insert, delete, and search operations are all $$O(\log n)$$.
- **No Indexing:** You can't access by index — use iterators instead.
- **Main operations:**
  - `insert(x)` — Adds x if not already present
  - `erase(x)` — Removes x if present
  - `count(x)`/`find(x)` — Quickly check if x exists
  - Iteration gives values in sorted order

- **Custom Sorting:** Use a comparator to change sorting (e.g., descending).
- **Variants:**
  - `multiset`: allows duplicates
  - `unordered_set`: no automatic sorting, faster on average

**When to Use:**
- Whenever you want a collection of sorted, unique elements and efficient lookup.

NOTE : use *s.rbegin() which points to the last element in the set
---

*/
