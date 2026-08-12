/*
Q.2 Write program which accept number and gives average of that many prime numbers.
Example :

Input : Number = 5
[Prime numbers : 2,3,5,7,11]
Output : 28

Input : Number = 7
[Prime numbers : 2,3,5,7,11,13,17]
Output : 58

Author: Suyash
*/

#include<iostream>
using namespace std;

double average_of_prime_num(int num);

int main()
{
    int num;
    std::cout << "Enter Number: ";
    cin >> num;

    std::cout << "Average of 1st " << num << " is: "<< average_of_prime_num(num) << std::endl;

    return 0;
}

bool prime_num(int num)
{
    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        return false;
    }
    return true;
}

double average_of_prime_num(int num)
{
    int i, counter = 2;
    int sum = 0;
    double avg = 0;

    for(i = 1; i <= num; )
    {
        if(prime_num(counter))
        {
            sum += counter;
           i++;
        }
        counter++;
    }

    return avg = sum/num;
}