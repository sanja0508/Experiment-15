//Program-4
#include<iostream>
#include<string.h>
using namespace std;

void revString(char *s) 
{
    if(*s == '\0') 
    {   //Base Condition
        return;
    } 
    else 
    {
        revString(s + 1);  //Recursion
        cout << *s;
    }
}

int main() 
{
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: ";
    revString(str);   //Function calling
    return 0;
}
