# 🔁 Recursion Examples and Exercises  

This repository contains a collection of C++ programs demonstrating **recursion concepts**, including factorial, reverse printing, power calculation, the Ackermann function, and more.  

## 📜 Table of Contents  

- 🔢 [Example 3.1: Factorial](#example-31-factorial)  
- 🔄 [Example 3.2: Reverse Input](#example-32-reverse-input)  
- ⚡ [Example 3.3: Power Function](#example-33-power-function)  
- 🔍 [Exercise 3.1: Power with Trace](#exercise-31-power-with-trace)  
- 🏗️ [Example 3.4, Exercise 3.2: Ackermann Function](#example-34-exercise-32-ackermann-function)  
- 🔢 [Exercise 3.3(a): Print Numbers](#exercise-33a-print-numbers)  
- 🎯 [Exercise 3.3(b): Binomial Coefficient](#exercise-33b-binomial-coefficient)  
- 🏆 [Exercise 3.3(c): Prime Number Check](#exercise-33c-prime-number-check)  

---

## 🔢 Example 3.1: Factorial  

Calculates the **factorial** of a number recursively.  

```cpp
int Factorial(int n) {
    if (n <= 1) return 1;
    else return (n * Factorial(n - 1));
}
```  

## 🔄 Example 3.2: Reverse Input  

Reads a sequence of characters and prints them **in reverse order** using recursion.  

```cpp
void rev() {
    char ch;
    cin.get(ch);
    if (ch != '\n') {
        rev();
        cout.put(ch);
    }
}
```  

## ⚡ Example 3.3: Power Function  

Computes \(X^N\) using recursion.  

```cpp
int Power(int X, int N) {
    if (N == 0) return 1;
    else return (X * Power(X, N - 1));
}
```  

## 🔍 Exercise 3.1: Power with Trace  

This version of the power function **prints the intermediate results** with formatting.  

```cpp
int Power(int X, int N) {
    if (N == 0) return 1;
    int x = (X * Power(X, N - 1));
    cout << X << setw(15) << N << setw(15) << x << endl;
    return x;
}
```  

## 🏗️ Example 3.4, Exercise 3.2: Ackermann Function  

Computes the **Ackermann function**, a classic example of recursion.  

```cpp
int Ackermann(int M, int N) {
    if (M == 0) return N + 1;
    else if (M > 0 && N == 0) return Ackermann(M - 1, 1);
    else return Ackermann(M - 1, Ackermann(M, N - 1));
}
```  

## 🔢 Exercise 3.3(a): Print Numbers  

Prints numbers from **N to 1** recursively.  

```cpp
int PrintNumbers(int N) {
    if (N <= 0) return 0;
    cout << N << " ";
    return PrintNumbers(N - 1);
}
```  

## 🎯 Exercise 3.3(b): Binomial Coefficient  

Calculates the **binomial coefficient** recursively.  

```cpp
int binomialCoeff(int N, int K) {
    if (N == K || K == 0) return 1;
    return (binomialCoeff(N - 1, K - 1) + binomialCoeff(N - 1, K));
}
```  

## 🏆 Exercise 3.3(c): Prime Number Check  

Determines whether a **number is prime** using recursive divisibility checking.  

```cpp
bool isPrime(int num) {
    if (num <= 1 || num % 2 == 0) return false;
    return checkDivisibility(num, 3);
}

bool checkDivisibility(int num, int i) {
    if (i == num) return true;
    if (num % i == 0) return false;
    return checkDivisibility(num, i + 2);
}
```  

## 🛠️ How to Run  

1. **Copy** the desired code into a C++ file (e.g., `main.cpp`).  
2. **Compile** using a C++ compiler:  
   ```sh
   g++ main.cpp -o main
   ```  
3. **Run** the executable:  
   ```sh
   ./main
   ```  

## 📜 License  

This project is **open-source** and available for **educational purposes**!  

---

Happy Coding! 🚀🎉  
```
