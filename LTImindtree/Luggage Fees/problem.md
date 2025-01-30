# **Airport Luggage Fee Calculation**

## **Problem Statement**  
In an airport, the **Airport Authority** has decided to charge a **minimum** amount from passengers carrying luggage. The charges depend on a **threshold weight (T)** set by the authority:  

- If the luggage weight **exceeds** the threshold **T**, the passenger must pay **double** the base amount.
- If the luggage weight is **less than or equal to** the threshold **T**, the passenger must pay **$1**.  

You need to determine the **total amount** all passengers must pay.

---

## **Function Description**  
Complete the `weightMachine` function with the following parameters:

| Parameter      | Type          | Description |
|---------------|--------------|-------------|
| `N`          | Integer       | Number of luggage items. |
| `weights[]`  | Integer array | List of luggage weights. |
| `T`          | Integer       | Threshold weight for extra charge. |

### **Returns:**  
- The function should return an **INTEGER** representing the **total** amount to be paid.

---

## **Constraints**  
- <= N <= 10^5
- <= weights[i] <= 10^5
- <= T <= 10^5 

---

## **Input Format**  
1. The first line contains an integer **N**, representing the number of luggage items.  
2. The next **N** lines contain an integer **weights[i]**, the weight of each luggage item.  
3. The last line contains an integer **T**, representing the threshold weight.

---

## **Output Format**  
- Print an **integer** denoting the **total amount** to be paid.

---

## **Example**  

## **Sample Input 1**
4
1
2
3
4
3

## **Sample Output 1**
5

**Explanation:**
Here all weights are less than threshold weight except the luggage with weight 4 (at index 3) so all pays base fare and it pays double fare.
