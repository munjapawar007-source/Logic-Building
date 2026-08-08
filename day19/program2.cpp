/*
Q.2 Program to print the average of n numbers.

For example: 1,2,3,4,5
count of all elements = 5
Sum of all elements = 1+2+3+4+5 =15
Average = Sum of all elements / count of all elements = 15/5 =3
Average = 3

Author: munja
*/

#include<iostream>
#include<vector>
using namespace std;

int Average_of_numbers(vector<int> nums);

int main()
{
    int n, data;
    cout << "provide length of Array: ";
    cin >> n;

    // vector<int> nums(n); wrong 
    vector<int> nums;
    cout << "Enter the data: ";
    for(int i = 1; i <= n; i++)
    {
        cin >> data;
        nums.push_back(data);
    }

   cout << "Average of Given Data is: " << Average_of_numbers(nums) << endl;

    return 0;
}

int Average_of_numbers(vector<int> nums)
{
    int sum = 0;
    int average = 0;

    for(int i : nums)
    {
        sum += i;
    }

    //average = sum / nums.size();

    return sum / nums.size();
}
