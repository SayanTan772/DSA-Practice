# Identify Row with Most 1s

## Problem Statement
You are given a 2D matrix of size `n × m` consisting only of `0`s and `1`s.  
Your task is to determine the index of the row that contains the **maximum number of `1`s**.  
- If multiple rows have the **same** maximum count of `1`s, return the **first** such row.  
- If **all rows contain only `0`s**, output `-1`.  

---

## **Input Format**
- The first line of input will contain a single integer `T`, denoting the **number of test cases**.
- Each test case consists of multiple lines of input:
  - The first line contains two integers `n` and `m`, representing the number of **rows** and **columns** in the matrix.
  - The next `n` lines each contain `m` integers (`0` or `1`), representing the **elements of the matrix**.

---

## **Output Format**
For each test case, output a **single integer**, the **0-based index** of the row that has the maximum number of `1`s.  
If **all rows contain only `0`s**, output `-1`.  

---

## **Constraints**
- `1 ≤ T ≤ 100`
- `1 ≤ N, M ≤ 1000`
- The elements of the matrix are either `0` or `1`.

---

## **Sample Input & Output**
### **Input**
