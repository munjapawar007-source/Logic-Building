/*
Q.1 Write a program which accept radius from user and return the Circumference.

Input : 5
Output : circumference: 31.4159

Author: munja
*/
#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>

using namespace std;

double circumference(int r);

int main()
{
    int r;
    cout << "Enter radius: ";
    cin >> r;

    cout << "circumference: " << circumference(r);

    return 0;
}

double circumference(int r)
{
    return 2 * M_PI * r;
}