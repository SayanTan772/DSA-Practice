## Good Number

### Problem Statement
You are given a number **N**, and your task is to determine whether it is a "Good Number" or not. A Good Number is defined as a number that is divisible by the sum of its own digits. If the number is divisible by the sum of its digits, it is classified as **Good**, otherwise, it is classified as **Bad**.

### Input Format
- The first line of input will contain a single integer **T**, denoting the number of test cases.
- Each test case contains a single integer **N**, the number you need to check.

### Output Format
For each test case, print **"Good Number"** if the number is Good, otherwise print **"Bad Number"**.

### Constraints
- \(1 \leq T \leq 100\)
- \(1 \leq N \leq 10^6\)

### Sample Input & Output
#### Input:
```
3
18
19
21
```

#### Output:
```
Good Number
Bad Number
Good Number
```

### Explanation:
- **Test Case 1**: The sum of digits of 18 is \(1+8=9\). Since \(18\div9=2\), 18 is a **Good Number**.
- **Test Case 2**: The sum of digits of 19 is \(1+9=10\). Since \(19\div10\) is not an integer, 19 is a **Bad Number**.
- **Test Case 3**: The sum of digits of 21 is \(2+1=3\). Since \(21\div3=7\), 21 is a **Good Number**.
