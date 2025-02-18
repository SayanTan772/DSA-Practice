# Distinct Colors

There are **N** different types of colors numbered from **1** to **N**. Chef has **A[i]** balls having color **i** (**1 \leq i \leq N**).

Chef will arrange some boxes and put each ball in exactly one of those boxes. Find the minimum number of boxes Chef needs so that no box contains two balls of the same color.

## Input Format
- The first line of input will contain a single integer **T**, denoting the number of test cases.
- The first line of each test case contains a single integer **N**, denoting the number of colors.
- The second line of each test case contains **N** space-separated integers **A[1], A[2], ..., A[N]** — denoting the number of balls having color **i**.

## Output Format
For each test case, output the minimum number of boxes required so that no box contains two balls of the same color.

## Constraints
- **1 \leq T \leq 1000**
- **2 \leq N \leq 100**
- **1 \leq A[i] \leq 10^5**

## Sample 1:
### Input
```
3
2
8 5
3
5 10 15
4
4 4 4 4
```
### Output
```
8
15
4
```

## Explanation
### Test case 1:
Chef needs at least **8** boxes such that no box has two balls of the same color. A possible configuration of the **8** boxes would be:
```
{[1,2], [1,2], [1,2], [1,2], [1,2], [1], [1], [1]}
```
where the **i-th** element of this set denotes the color of balls in the **i-th** box.

### Test case 2:
Chef needs at least **15** boxes such that no box has two balls of the same color.

### Test case 3:
Chef needs at least **4** boxes such that no box has two balls of the same color. A possible configuration of the **4** boxes would be:
```
{[1,2,3,4], [1,2,3,4], [1,2,3,4], [1,2,3,4]}
```
where the **i-th** element of this set denotes the color of balls in the **i-th** box.

