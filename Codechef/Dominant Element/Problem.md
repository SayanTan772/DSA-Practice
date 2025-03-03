# Dominant Element

You are given an array **A** of length **N**. An element **X** is said to be dominant if the frequency of **X** in **A** is strictly greater than the frequency of any other element in **A**.

For example, if **A = [2,1,4,4,4]**, then **4** is a dominant element since its frequency is higher than the frequency of any other element in **A**.

Find if there exists any dominant element in **A**.

## Input Format
The first line of input contains a single integer **T** — the number of test cases. Then the test cases follow.

The first line of each test case contains an integer **N** — the size of the array **A**.

The second line of each test case contains **N** space-separated integers **A₁, A₂, …, Aₙ** denoting the array **A**.

## Output Format
For each test case, output **YES** if there exists any dominant element in **A**. Otherwise, output **NO**.

You may print each character of **YES** and **NO** in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

## Constraints
- **1 ≤ T ≤ 500**
- **1 ≤ N ≤ 1000**
- **1 ≤ Aᵢ ≤ N**

## Sample 1:
### Input
```
4
5
2 2 2 2 2
4
1 2 3 4
4
3 3 2 1
6
1 1 2 2 3 4
```
### Output
```
YES
NO
YES
NO
```

## Explanation:
- **Test case 1**: **2** is the dominant element.
- **Test case 2**: There does not exist any dominant element.
- **Test case 3**: **3** is the dominant element.
