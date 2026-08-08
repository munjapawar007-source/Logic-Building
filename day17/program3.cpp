/*
Q.2 K Shape Character Pattern Program.

A B C D E F
A B C D E
A B C D
A B C
A B
A
A
A B
A B C
A B C D
A B C D E
A B C D E F

Author: munja
*/

#include <iostream>
using namespace std;

void pattern(int n);

int main()
{
    int n;
    cout << "enter num: ";
    cin >> n;

    pattern(n);

    return 0;
}

void pattern(int n)
{
    int i,j;
    char c = 'A' ;

    for ( i = 1; i <= n; i++)
    {
        
        for(c= 'A'; c <= n - i + 'A'; c++ )
        {
                cout << c << " ";
        }
        cout << endl;
    }

    for(i = n; i>=1; i--)
    {
        for(c = 'A'; c<=n-i+'A';c++)
            cout << c << " ";
            cout << endl;
    }
}