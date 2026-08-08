/*
Q.3 Write a Program which accept number and check whether it is Automorphic Number or Not.

Input : num = 5
Output : True
Explaination: 5^2 = 25
Square ends in the same digit as the number itself.

Input : num = 7
Output : False

Author: munja
*/

#include<iostream>
using namespace std;

bool check_automorphic_number(int n);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    if(check_automorphic_number(n))
        cout << n << " Is Automorpic Number!";
    else
        cout << n << " Is not Automorphic Number!";

    return 0;
}

bool check_automorphic_number(int n)
{
    int square = n * n;
    while (square != 0 || n % 10)
    {
        if(n == 0)
            break;
            
        if((square % 10) != (n % 10))
            return false;

        square /= 10;
        n /= 10;
    }

    return true;
}