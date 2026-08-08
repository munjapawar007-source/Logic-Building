/*
Q.2 Program to check whether number is pronic or not.

A number is said to be pronic number if it is a product of two consecutive numbers.

For examples:
6 = 2 x 3
72 = 8 x 9

Input : 6
Output : It is a pronic number

Input : 7
Output : It is not a pronic number

Author: munja
*/

#include<iostream>
using namespace std;

bool check_pronic_number(int n);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    if(check_pronic_number(n))
        cout << n << " is pronic number!";
    else
        cout << n << " is Not pronic number!";
        
    return 0;
}

bool check_pronic_number(int n)
{
    int pronic = n;
    
    for(int i = 1; i < n/i; i++)
    {
        if(i * (i + 1) == n)
            return true;
    }

    return false;
}
