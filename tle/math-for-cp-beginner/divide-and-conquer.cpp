// https://codeforces.com/problemset/problem/1762/A

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back
typedef long long ll;
typedef vector<int> vecin;
typedef vector<ll> vecll;
vecin results;

void checkMinOps(int a);

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

        vecin integers(n);
        forn(i, n)
        {
            cin >> integers[i];
        }

        int sum = accumulate(integers.begin(), integers.end(), 0);

        if (sum % 2 == 0)
        {
            cout << 0 << endl;
        }

        else
        {
            for (int i = 0; i < n; i++)
            {
                checkMinOps(integers[i]);
            }
            sort(results.begin(), results.end());
            cout << results[0] << endl;
        }

        results.clear();
        t--;
    }
}

void checkMinOps(int a)
{
    int count = 0;
    int original = a % 2;
    while ((a % 2) == original)
    {
        a /= 2;
        count++;
    }

    results.pb(count);
    return;
}

/*
/-------[LEARNINGS]-------

/*
📚 Learnings from this problem:

1. ✅ **Assignment vs Comparison Bug**:
   - `if (isGood = false)` assigns false instead of checking.
   - Always use `==` for comparison, or simply `if (!isGood)`.

2. ✅ **Always Read the Input Properly**:
   - Don’t forget to take array input using a loop after declaring the vector.

3. ✅ **Use STL Smartly**:
   - `accumulate(vec.begin(), vec.end(), 0)` to calculate sum of vector.
   - `sort(vec.begin(), vec.end())` to sort in ascending order.

4. ✅ **Avoid Global Container Bugs**:
   - Always `clear()` global vectors like `results` before reuse in multiple test cases.

5. ✅ **Parity-Flipping Logic**:
   - To flip parity of a number, divide by 2 until its `%2` value changes.
   - Count such steps and choose the minimum among all elements.

6. ✅ **Clean Code Tip**:
   - Return value is not needed in `void` functions unless for clarity.
   - Use descriptive variable names for clarity and avoid unnecessary flags.

7. ✅ **Edge Case Awareness**:
   - If sum is already even, don’t do anything.
   - If sum is odd, only one number needs to flip parity — choose the one with minimal steps.

💡 This problem sharpened understanding of parity, bitwise thinking, vector usage, input handling, and avoiding logical pitfalls.
*/

/*
**Learning Journal Entry — C++ STL: `accumulate()` for Sum of a Vector**

To calculate the sum of elements in a vector, you can use the
`accumulate()` function from the `<numeric>` header.

### ✅ Syntax:

```cpp
#include <iostream>
#include <vector>
#include <numeric> // for accumulate

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    int sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
```

### 🔍 Explanation:

* `v.begin()` and `v.end()` define the range of elements.
* `0` is the initial value of the sum.
* `accumulate()` adds all elements in the range to the initial value.

### 🧠 Output:

```
Sum: 15
```

### 💡 Notes:

* `accumulate()` works on any container with iterators (like `vector`, `array`, etc.).
* You can also use it for non-sum operations by passing a custom function.

> This is a clean, STL way to sum elements without writing a manual loop.

Always read input values after declaring a vector
Don’t use = inside conditions — use == or ! to check
Always clear global containers (results.clear())
Simplified parity-flip logic: divide until parity changes
Use while ((a % 2) == original_parity) to count flips
For minimal element, use sort and take results[0]
-----------------------------------------------------------------------------

*/