/*
Q.1 Write a program to which accept number from the user and print fibonacci series up to that number.

Input : 7
Output : 0 1 1 2 3 5 8

Input: -3
Output: 

Author: munja
*/

#include<iostream>
using namespace std;

void fibonacci(int n)
{
    int first = 0;
    int second = 1;
    int temp;

    if(n<0)
    {
        cout << "Wrong input..";
        return;
    }
    else if(n == 1)
        cout << first << " ";
    else if(n >= 2)
        cout << first << " " << second << " ";


    for(int i = 3; i <= n; i++)
    {    
        temp = first + second;
        cout << temp << " ";
        first = second;
        second = temp;
    }
}

int main()
{
    void f1(int n);
    int n;
    cout << "enter number: ";
    cin >> n;

    f1(n);

    return 0;
}

void f1(int n)
{
    int first = 0, second = 1;
    int fib;
    int bit;

    if(n<0)
        return;
    else if(n == 1)
        cout << first << " ";
    else if(n >= 2)
        cout << first << " " << second << " ";

    
    for(int i = 3; i <= n; i++)
    {
        fib = first + second;
        cout << fib << " ";
        first = second;
        second = fib;
    }

    cout << "\n-----------------------------------\n";

    cout << "7 in Binary: ";
    for(int i = 3; i>= 0; i--)
    {
        bit = (n >> i) & 1;
        
        cout << bit;
    }
}