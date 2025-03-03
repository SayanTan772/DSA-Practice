## Equal Elements

### Problem Statement
You are given an array `A` of size `N`. In one operation, you can do the following:

- Select indices `i` and `j` (`i ≠ j`) and set `A[i] = A[j]`.

Find the minimum number of operations required to make all elements of the array equal.

---

### Input Format
- The first line of input will contain a single integer `T`, denoting the number of test cases.
- Each test case consists of multiple lines of input.
  - The first line of each test case contains an integer `N` — the size of the array.
  - The next line contains `N` space-separated integers, denoting the array `A`.

---

### Output Format
For each test case, output on a new line, the minimum number of operations required to make all elements of the array equal.

---

### Constraints
- `1 ≤ T ≤ 1000`
- `1 ≤ N ≤ 2 × 10^5`
- `1 ≤ A[i] ≤ N`
- The sum of `N` over all test cases won't exceed `2 × 10^5`.

---

### Sample 1

#### Input
```plaintext
3
3
1 2 3
4
2 2 3 1
4
3 1 2 4
```

#### Output
```plaintext
2
2
3
```

---

### Explanation
#### Test case 1:
The minimum number of operations required to make all elements of the array equal is `2`. A possible sequence of operations is:

1. Select indices `1` and `2` and set `A[1] = A[2] = 2`.
2. Select indices `3` and `2` and set `A[3] = A[2] = 2`.

Thus, the final array is `[2, 2, 2]`.

#### Test case 2:
The minimum number of operations required to make all elements of the array equal is `2`. A possible sequence of operations is:

1. Select indices `3` and `2` and set `A[3] = A[2] = 2`.
2. Select indices `4` and `3` and set `A[4] = A[3] = 2`.

Thus, the final array is `[2, 2, 2, 2]`.

#### Test case 3:
The minimum number of operations required to make all elements of the array equal is `3`. A possible sequence of operations is:

1. Select indices `2` and `1` and set `A[2] = A[1] = 3`.
2. Select indices `3` and `1` and set `A[3] = A[1] = 3`.
3. Select indices `4` and `1` and set `A[4] = A[1] = 3`.

Thus, the final array is `[3, 3, 3, 3]`.
