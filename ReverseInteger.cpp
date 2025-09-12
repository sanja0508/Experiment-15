//Program-5
#include<iostream>
using namespace std;

//creating function
void reverseNum(int n) 
{
    if(n == 0) 
    {   //Base Condition
        return;
    } 
    else 
    {
        cout << n % 10;
        reverseNum(n / 10);  //Recursion
    }
}

int main() 
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Reversed number: ";
    reverseNum(num);   //Function calling
    return 0;
}
