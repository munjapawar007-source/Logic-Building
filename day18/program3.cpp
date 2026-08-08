/*
Q.3 Write a program which accept number from user and state whether it is perfect number or not.

Input : num = 14
Output : False

Input : num = 6
Output : True

Author: munja
*/

#include<iostream>
using namespace std;

bool perfect_number(int num);

int main()
{
    int num;
    cout << "Enter the Num: ";
    cin >> num;

   if(perfect_number(num))
   {
        cout << num << " Is Perfect Number..!\n" << endl;;
   } 
   else
        cout << num << " Is Not Perfect Number..!" << endl;


    return 0;
}

bool perfect_number(int num)
{
    int sum = 0;
    for(int i = 1; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    if(sum == num)
        return true;

    return false;
}
