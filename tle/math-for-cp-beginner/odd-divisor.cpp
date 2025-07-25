// https://codeforces.com/problemset/problem/1475/A

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

        ll n;
        cin >> n;

        int c = 1;
        int i = 1;
        while (pow(2,i)<=n)
        {
            if (pow(2, i) == n)
            {
                cout << "NO" << ln;
                c--;
            }
            i++;
        }
        if(c==1) cout<<"YES"<<ln;

        t--;
    }
}

/*

/-------[CONCEPT: Accessing the elements of a set]-------
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 4, 2, 3, 5};

    // Accessing first element
    auto it1 = s.begin();

    // Accessing third element
    auto it2 = next(it1, 2);

    cout << *it1 << " " << *it2;
    return 0;
}

1 3
-----------------------------------------------------------------------------

/-------[LEARNINGS]-------
Here’s a **concise, bullet-point summary** of everything you learned
in this thread about C++ sets, iterators, for loops, and the `auto`
keyword—suitable for your learnings journal[1]:

- **std::set in C++**
  - An associative container that stores unique elements in sorted order.

- **Iterating over a std::set**
  - You use iterators to access elements because set does not allow random access like arrays or vectors.
  - Syntax for obtaining a set iterator:
    `std::set::iterator it = prime.begin();`

- **Wrong usage of numeric type with iterators**
  - Using `ll i = prime.begin();` is incorrect because `ll` (long long int)
   is a basic numeric type, while `prime.begin()` returns a set iterator—a completely different type.

- **Accessing element values through an iterator**
  - Dereference the iterator to access the value: `*it`
  - Using `prime(i)` or `prime[i]` is invalid for sets.

- **For loop corrections for set iteration**
  - With explicit type:
    `for (std::set::iterator i = prime.begin(); i != prime.end(); i++)`
  - With type inference:
    `for (auto i = prime.begin(); i != prime.end(); i++)`
  - Recommended modern style (range-based loop):
    `for (const auto& element : prime)`

- **What is `auto`?**
  - C++ keyword for automatic type deduction based on the right-hand side of the assignment.
  - Useful for containers with complex or verbose iterator types.
  - Example:
    `auto it = prime.begin();`
    Here, the compiler infers `it` as a `std::set::iterator`.
  - Widely used for simplifying code and reducing mistakes with complex types.

- **"iterator" is a concept, not a universal type**
  - Each STL container has its own specific iterator type,
  e.g., `std::set::iterator`, not just `iterator`.



-----------------------------------------------------------------------------

/-------[CONCEPT: Traversing through a set]-------


#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {5, 1, 4, 3, 2};

    // Traversing using range based for loop
    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    return 0;
}

OUTPUT : 1 2 3 4 5


-----------------------------------------------------------------------------

/-------[C++ STL Set - Key Concepts Summary]-------


## What is a Set?

A **set** is an associative container in C++ STL that stores unique elements in a sorted order[1].
By default, elements are sorted in ascending order, but this can be customized[1].

## Key Characteristics

- **Unique elements only**: No duplicates allowed[1]
- **Automatically sorted**: Elements maintained in sorted order[1]
- **Fast operations**: Provides efficient insertion, deletion, and search operations[1]
- **Immutable elements**: Cannot modify elements once inserted[1]

## Syntax and Declaration

```cpp
set s;
```

Where:
- `T`: Data type of elements
- `comp`: Optional comparison function for custom sorting[1]

### Common Declaration Methods

```cpp
// Empty set
set s1;

// Initialize with values
set s2 = {5, 1, 3, 2, 4};
```

## Basic Operations

### 1. Insertion
- **Methods**: `insert()` and `emplace()`[1]
- **Behavior**: Duplicates are automatically ignored[1]
- **Position**: Cannot specify insertion position (auto-determined by sorting)[1]

### 2. Accessing Elements
- **No direct indexing**: Cannot use `set[i]` like arrays[1]
- **Iterator-based**: Use `begin()`, `end()`, `next()`, or `advance()`[1]

### 3. Searching
- **Method**: `find()` function[1]
- **Return**: Iterator to element if found, `end()` iterator if not found[1]

### 4. Deletion
- **Method**: `erase()` function[1]
- **Options**: Delete by value or by iterator position[1]

### 5. Traversal
- **Range-based for loop**: `for(auto x : s)`[1]
- **Iterator-based**: Using `begin()` and `end()`[1]

## Time Complexity

| Operation | Time Complexity |
|-----------|----------------|
| Insert element | O(log n) |
| Delete element | O(log n) |
| Find element | O(log n) |
| Find largest element | O(1) |
| Find smallest element | O(1) |
| Traverse set | O(n) |

## Internal Implementation

- **Data structure**: Red-Black Tree[1]
- **Guarantee**: Elements always stored in sorted order[1]
- **Performance**: Logarithmic time for most operations[1]

## Important Member Functions

### Core Functions
- `insert()` / `emplace()`: Add elements[1]
- `erase()`: Remove elements[1]
- `find()`: Search for elements[1]
- `count()`: Check if element exists (returns 0 or 1)[1]
- `contains()`: Check element presence[1]

### Iterators
- `begin()` / `end()`: Forward iterators[1]
- `rbegin()` / `rend()`: Reverse iterators[1]
- `cbegin()` / `cend()`: Constant iterators[1]

### Utility Functions
- `size()`: Number of elements[1]
- `empty()`: Check if set is empty[1]
- `clear()`: Remove all elements[1]
- `swap()`: Exchange contents with another set[1]

### Bounds Functions
- `lower_bound()`: First element ≥ given value[1]
- `upper_bound()`: First element > given value[1]
- `equal_range()`: Range of elements equal to given value[1]

## Set vs Unordered Set

| Feature | Set | Unordered Set |
|---------|-----|---------------|
| **Ordering** | Sorted | Arbitrary |
| **Time Complexity** | O(log n) | O(1) average |
| **Implementation** | Red-Black Tree | Hash Table |

## Key Limitations

1. **No duplicates**: Cannot store multiple copies of same element[1]
2. **No direct indexing**: Cannot access elements by position like arrays[1]
3. **Immutable elements**: Cannot modify elements once inserted[1]
4. **No random access**: Must use iterators to navigate[1]

## When to Use Sets

- Need unique elements only
- Require automatic sorting
- Frequent search operations
- Need logarithmic time guarantees
- Working with mathematical set operations

This summary covers the fundamental concepts of C++ STL sets that are essential
for understanding and using this container effectively in your programs.

[1] https://www.geeksforgeeks.org/cpp/set-in-cpp-stl/

-----------------------------------------------------------------------------


*/