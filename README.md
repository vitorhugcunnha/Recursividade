# Recursive Algorithms in C++

This repository contains simple implementations of **recursive algorithms** in C++.  
The goal is to demonstrate how recursion can be applied to solve common problems such as **factorial calculation**, **Fibonacci sequence**, and **string reversal**.

## Files
- `fatorial.cpp` → Recursive factorial calculation  
- `fibonacci.cpp` → Recursive Fibonacci sequence  
- `invertString.cpp` → Recursive string inversion  
- `recursividade.cpp` → General examples of recursion  

---

## Examples

### Factorial (fatorial.cpp)
```cpp
int fatorial(int n){
    if (n==0 || n==1) return 1;
    return n * fatorial(n-1);
}
Explanation:

Base case: if n is 0 or 1, return 1.

Recursive case: multiply n by the factorial of (n-1).

This is a classic example of recursion, where a big problem is reduced to smaller subproblems.

Usage:
This function calculates the factorial of a given number. For example, 5! = 5 * 4 * 3 * 2 * 1 = 120.

String Reversal (invertString.cpp)
cpp
Copiar código
void inverteString(char str[], int inicio, int fim){
    if (inicio >= fim) return;
    swap(str[inicio], str[fim]);
    inverteString(str, inicio+1, fim-1);
}
Explanation:

Base case: when the starting index is greater or equal to the ending index, stop.

Recursive case: swap the first and last characters, then call the function again on the substring inside.

Usage:
This function inverts a string recursively.
Example: "hello" → "olleh".

Why Use Recursion Instead of Loops?
Recursion is often more natural and readable when solving problems that can be broken into smaller subproblems (divide and conquer).

It can reduce code complexity for tasks like tree traversals, backtracking, and mathematical definitions (factorial, Fibonacci).

While loops (for, while) may be more efficient in terms of performance and memory, recursion shines in problems that are inherently recursive in nature.

When to prefer recursion:

Working with hierarchical data structures (trees, graphs).

Problems that are naturally defined in terms of smaller subproblems.

When readability and clarity are more important than raw performance.

How to Run
Clone the repository:

bash
Copiar código
git clone https://github.com/your-username/recursive-algorithms-cpp.git
cd recursive-algorithms-cpp
Compile a file using g++:

bash
Copiar código
g++ fatorial.cpp -o fatorial
./fatorial
