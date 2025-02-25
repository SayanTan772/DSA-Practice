## Union of Sorted Arrays

You are given two sorted arrays, `arr1` and `arr2`. Your task is to find the union of these two arrays. The union includes all distinct elements from both arrays in ascending order.

Write a function that returns the union of `arr1` and `arr2` in a single sorted array.

### Input Format
- The first line of input will contain a single integer `T`, denoting the number of test cases.
- Each test case consists of two lines of input:
  - The first line contains two integers `N` and `M`, denoting the size of the two arrays.
  - The next two lines denote the two arrays `arr1` and `arr2` of size `N` and `M` respectively.

### Output Format
For each test case, output a sorted array containing the distinct elements from both `arr1` and `arr2`.

### Constraints
- `1 \leq T \leq 100`
- `1 \leq N, M \leq 10^5`
- `1 \leq arr1[i], arr2[i] \leq 10^9`
- Both the arrays are sorted in ascending order.

### Sample 1:
#### Input
```
2
5 4
1 3 4 5 7
2 3 5 10
3 2
11 12 13 
14 25 
```
#### Output
```
1 2 3 4 5 7 10
11 12 13 14 25
```

### Explanation:
- **Test Case 1**: It returns all the distinct elements in sorted order.
- **Test Case 2**: All the elements are distinct, so it returns the array in sorted order.