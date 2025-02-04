## Chef and Dolls

Chef is a fan of pairs and likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection, he found that there were an odd number of dolls. Someone had stolen a doll!!!

Help Chef find which type of doll is missing.

### Input
- The first line contains an integer **T**, the number of test cases.
- The first line of each test case contains an integer **N**, the number of dolls.
- The next **N** lines contain the types of dolls that are left.

### Output
For each test case, display the type of doll that doesn't have a pair, in a new line.

### Constraints
- **1 ≤ T ≤ 10**
- **1 ≤ N ≤ 100000 (10^5)**
- **0 ≤ type ≤ 100000**

### Sample 1:
#### **Input:**
```
1
3
1
2
1
```
#### **Output:**
```
2
```

### Explanation:
For this case, we have three dolls `[1, 2, 1]`. So we have two dolls of type `1`, but only one doll of type `2`. Thus, one doll of type `2` is missing.