# **Minimum Money Borrowed for Books**

## **Problem Statement**  
Abhijeet is one of those students who tries to earn his own money through part-time jobs to cover the expenses of buying books. Since he doesn't have a fixed job, he first calculates how much each book costs and then works to earn that amount.  

He follows these rules:  
- He earns money and buys the books accordingly.
- If he earns **more** than the book's cost, the extra money is saved for the next book.
- If he earns **less**, he uses his saved money from previous books.
- If he still falls short, he needs to borrow money from his parents.  

However, since his parents are at work during the day and he can't contact them immediately, you, as his friend, must determine the **minimum amount of money he needs to borrow** to buy all the books.  

He can buy the books in **any order** to minimize the borrowed amount.  

---

## **Function Description**
Complete the function with the following parameters:

| Parameter      | Type           | Description |
|---------------|---------------|-------------|
| `N`          | Integer        | The number of books Abhijeet needs to buy. |
| `EarnArray[]` | Integer array  | The earnings he makes for each book. |
| `CostArray[]` | Integer array  | The actual cost of each book. |

---

## **Constraints**
- \(1 \leq N \leq 10^3\)
- \(1 \leq EarnArray[i] \leq 10^3\)
- \(1 \leq CostArray[i] \leq 10^3\)

---

## **Input Format**
1. The first line contains **N**, the number of books.
2. The next **N** lines contain the **earnings** for each book.
3. The next **N** lines contain the **cost** of each book.

---

## **Output Format**
- Print the **minimum amount of money** he needs to borrow from his parents.

---

### **Input**
3

[3, 4, 2]

[5, 3, 4]

---

### **Output**
3

---

## **Notes**
- The books can be bought in any order to minimize the borrowing amount.
- The solution must be optimized to handle **large values of N (up to 1000).**