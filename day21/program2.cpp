/*
Q.2 Program to check whether number is Krishnamurthy number or not.

Krishnamurthy number is another special number in Java. A number is said to be Krishnamurthy 
if the factorial sum of all its digits is equal to that number. Krishnamurthy number is also referred to as a Strong number.

Example : 
Input: 145  
= 1! + 4! + 5!  
= 1 + ( 4 * 3 * 2 * 1 ) + ( 5 * 4 * 3 * 2 * 1 )  
= 1 + 24 + 120  
= 145

Output: True
 
Author: munja
*/

#include<iostream>
using namespace std;

bool check_krishnamurthy_number(int num);

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    if(check_krishnamurthy_number(num))
    {
        cout << "Given number is krishnamurthy!";
    }
    else
        cout << "Number is not krishnamurth!";


    return 0;
}


bool check_krishnamurthy_number(int num)
{
    int temp = num;
    int fact, sum = 0, digit;

    while(temp != 0)
    {
        fact = 1;
        digit = temp % 10;

        for (int i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if(sum == num)
        return true;
        
    return false;
}
