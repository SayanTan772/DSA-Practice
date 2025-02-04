# Devu and Friendship Testing

### Problem Statement
Devu has `n` weird friends. It's his birthday today, so they thought that this is the best occasion for testing their friendship with him. They put up conditions before Devu that they will break the friendship unless he gives them a grand party on their chosen day. Formally, the `i`th friend will break his friendship if he does not receive a grand party on `d_i`th day.

Devu, despite being as rich as Gatsby, is quite frugal and can give at most one grand party daily. Also, he wants to invite only one person to a party. So he just wonders what is the maximum number of friendships he can save. Please help Devu in this tough task!

---

### Input Format
- The first line of the input contains an integer `T` denoting the number of test cases.
- The description of `T` test cases follows:
  - First line will contain a single integer denoting `n`.
  - Second line will contain `n` space-separated integers where the `i`th integer corresponds to the day `d_i` as given in the problem.

---

### Output Format
For each test case, print a single line corresponding to the answer of the problem.

---

### Constraints
- `1 <= T <= 10^4`
- `1 <= n <= 50`
- `1 <= d_i <= 100`

---

### Sample Input/Output
#### **Input:**
```
2
2
3 2
2
1 1
```
#### **Output:**
```
2
1
```

---

### Explanation
#### **Example Case 1:**
Devu can give a party to the second friend on day `2` and the first friend on day `3`, so he can save both his friendships.

#### **Example Case 2:**
Both friends want a party on day `1`, and since Devu can not afford more than one party a day, he can save only one of the friendships. Hence, the answer is `1`.