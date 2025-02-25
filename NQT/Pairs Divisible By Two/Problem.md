## Count Pairs Divisible by 2

You are given an array `arr` of length `N`. You have to calculate the count of pairs in an array such that the sum of pairs is divisible by `2`.

### Input Format
- The first line of input will contain a single integer `T`, denoting the number of test cases.
- Each test case consists of two lines of input:
  - The first line of each test case contains `N`, the length of array `arr`.
  - The second line consists of the array `arr`.

### Output Format
For each test case, output on a new line the number of divisible pairs.

### Constraints
- `1 ≤ T ≤ 100`
- `2 ≤ N ≤ 10^5`
- `0 ≤ arr[i] ≤ 10^5`

### Sample 1:
#### Input:
```
3
4
6 1 2 3
6
2 2 1 7 5 3
2
4 8
```

#### Output:
```
2
7
1
```

### Explanation:
- **Test Case 1:** There are only two pairs formed- `(6,2)` and `(1,3)`.
- **Test Case 2:** These are the 7 pairs that are formed- `(2,2)`, `(1,7)`, `(1,5)`, `(1,3)`, `(7,5)`, `(7,3)`, `(5,3)`.
- **Test Case 3:** There is only one pair that is formed- `(4,8)`.
