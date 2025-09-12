//Program-1
#include<iostream>
using namespace std;

int factorial(int n) 
{
    if(n == 0) 
    {   //Base Condition
        return 1;
    } else {
        return n * factorial(n - 1); //Recursion
    }
}

int main() 
{
    int num, result;
    cout << "Enter any positive integer: ";
    cin >> num;
    result = factorial(num);  //Function calling
    cout << "Factorial of " << num << " is: " << result;
    return 0;
}
