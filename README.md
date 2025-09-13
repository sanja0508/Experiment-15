# Experiment-15

Aim: To understand and implement the concept of recursion in C++ through different problems such as calculating factorial, reversing numbers, reversing strings, and calculating the sum of natural numbers.

Software Required: Visual Studio

Theory: Recursion is a technique in programming where a function calls itself in order to solve a problem. The primary advantage of recursion is that it allows problems to be broken down into smaller subproblems that are easier to solve. It is especially useful in problems where the solution involves repeating similar steps.

A recursive function typically consists of:
Base Case: The simplest, smallest instance of the problem, where no further recursive calls are made. The base case prevents infinite recursion and provides a terminating condition.
Recursive Case: The part of the function where it calls itself to solve smaller instances of the problem.
In C++, a function can call itself either directly or indirectly. Recursive functions are used for problems like factorial calculation, sorting algorithms, traversing data structures (trees, graphs), and reversing data (strings, numbers).

Recursion works as follows:
The function calls itself with a reduced problem size.
The base case checks for the simplest condition to stop the recursion.
Each recursive call contributes to the final solution by either reducing the problem size or combining results.
However, it's important to handle recursion carefully:
A function should always have a base case to avoid infinite recursion.
Recursive functions generally consume more memory due to maintaining the call stack.

Concepts Covered:
Base Case: Prevents infinite recursion.
Recursive Case: Calls the function with a smaller problem.
Function Call Stack: Each recursive call consumes memory on the stack, which can lead to a stack overflow for deep recursion.
Efficiency of Recursion: In some cases, recursion can be inefficient, leading to large memory consumption and slower performance due to the overhead of maintaining function calls on the stack.

Algorithms:
1. Factorial Using Recursion:
Input: A positive integer n.
Process: If n is 0, return 1 (base case).
Otherwise, return n * factorial(n-1) (recursive case).
Output: The factorial of n.

2. Reverse a Number Using Recursion:
Input: A positive integer n.
Process: Print the last digit (n % 10).
Call the function recursively with n / 10.
Continue until n becomes 0 (base case).
Output: The reversed number.

3. Reverse a String Using Recursion:
Input: A string s.
Process: If the string ends (*s == '\0'), return.
Recursively call revString(s + 1) to move to the next character.
Print the character after the recursive call.
Output: The reversed string.

4. Sum of First N Natural Numbers Using Recursion:
Input: A positive integer n.
Process: If n is 0, return 0 (base case).
Otherwise, return n + sum(n-1) (recursive case).
Output: The sum of the first n natural numbers.

Conclusion: In this experiment, we explored the concept of recursion in C++. Recursion allows a function to call itself to solve smaller instances of a problem. We applied recursion to various problems, including calculating the factorial, reversing numbers, reversing strings, and calculating the sum of natural numbers.
By observing how recursion breaks down problems into simpler subproblems, we gained insights into the power and elegance of recursive solutions. However, it is important to handle recursion carefully to avoid infinite recursion and excessive use of the stack, which could lead to stack overflow errors.
