/*
Q.3 Write a program to print given pattern.

Input : num = 7

      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *

Author: munja
*/

#include <iostream>
using namespace std;

void pattern(int num);

int main()
{
    int num;
    std::cout << "Enter Number: ";
    std::cin >> num;

    pattern(num);

    return 0;
}

void pattern(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j < num; j++)
        {
            std::cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    for(int i = num-1; i>=1; i--)
    {
        for(int j=i; j<num; j++)
            std::cout << "  ";
        for(int j = 1; j<=2*i-1; j++)
            std::cout << "* ";

        std::cout << std::endl;
    }
}
