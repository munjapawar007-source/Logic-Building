/*
Q.3 Write a program to print given pattern.

Input : row = 5 col = 5
Output :
A       E
A B     E
A   C   E
A     D E
A       E
-------------
A       A
B B     B
C   C   C
D     D D
E       E

Author: munja
*/

#include <iostream>
using namespace std;

void pattern(int n);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char c = 'A', j = 1; c <= n - 'A' + 1, j <= n; c++, j++)
        {
            if (j == 1 || j == n || i == j)
                cout << c << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
cout << "-------------------------------------\n";
    for (char c = 'A'; c < n + 'A'; c++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == n || i == c - 'A' + 1)
                cout << c << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
