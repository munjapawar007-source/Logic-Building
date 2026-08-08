/*
Q.3 Write a Program to check if number is Harshad number or not.

Input : num = 21
Output : True

it is divisible by its own sum (1+2) of its digit(2,1)
So it is Harshad's Number

Input : num = 31
Output : False

it is not divisible by its own sum (3+1) of its digit(3,1)
So it is not Harshad's Number

Author: Shreyash
*/

#include<iostream>
using namespace std;

bool Harshad_number(int num);

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    if(Harshad_number(n))
    {
        cout << n << " Is Harshad Number..!" << endl;
    }
    else
    {
        cout << n << " Is Not Harshed Number..!" << endl;
    }

    return 0;
}

bool Harshad_number(int num)
{
    int sum = 0, temp = num;
    while(temp != 0)
    {
        sum += (temp % 2);
        
        temp /= 10;
    }

    if(num % sum == 0)
        return true;

    return false;
}
