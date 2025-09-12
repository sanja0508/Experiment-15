//Program-3
#include<iostream>
using namespace std;

int sum(int n) 
{
    if(n == 0) 
    {   //Base Condition
        return 0;
    } 
    else 
    {
        return n + sum(n - 1); //Recursion
    }
}

int main() 
{
    int n, result;
    cout << "Enter a positive integer: ";
    cin >> n;
    result = sum(n);  //Function calling
    cout << "Sum of first " << n << " natural numbers = " << result;
    return 0;
}
