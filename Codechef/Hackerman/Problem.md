# Hackerman

Hackerman wants to know who is the better player between Bob and Alice with the help of a game.

## Game Rules

- First, Alice throws a die and gets the number **A**.
- Then, Bob throws a die and gets the number **B**.
- Alice wins the game if the sum on the dice is a **prime number**; otherwise, Bob wins.

Given **A** and **B**, determine who wins the game.

---

## Input Format

- The first line of input will contain a single integer **T** — the number of test cases.
- The first and only line of each test case contains two space-separated integers **A** and **B**.

---

## Output Format

For each test case, output on a new line the winner of the game: **Alice** or **Bob**.

Each letter of the output may be printed in either uppercase or lowercase (e.g., `Alice`, `ALICE`, `AlIce`, and `aLIcE` will all be considered equivalent).

---

## Constraints

- \(1 \leq T \leq 36\)
- \(1 \leq A \leq 6\)
- \(1 \leq B \leq 6\)

---

## Sample Input/Output

### **Input**
3 2 1 1 1 2 2

---

### **Output**
Alice

Alice

Bob

---

## Explanation:

**Test case 1:**  
- **A** = 2, **B** = 1  
- Their sum is **2 + 1 = 3**, which is a **prime number**, so **Alice** wins.

**Test case 2:**  
- **A** = 1, **B** = 1  
- Their sum is **1 + 1 = 2**, which is a **prime number**, so **Alice** wins.

**Test case 3:**  
- **A** = 2, **B** = 2  
- Their sum is **2 + 2 = 4**, which is **not a prime number**, so **Bob** wins.
