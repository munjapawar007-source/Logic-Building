/*
Q.2 Write a program to find area of triangle.

Input : Breadth :- 4
        Height :- 13
Output : Area of triangle is 26.

Author: munja
*/
#define USE_MATH_DEFINE
#include<iostream>
#include<cmath>
using namespace std;

double Area_Of_Triangle(double breadth, double height);

int main()
{
    int b = 4, h = 13;

    cout << "area of triangle is: " << Area_Of_Triangle(b,h);

    return 0;
}

double Area_Of_Triangle(double breath, double height)
{
    return ((height*breath)/2);
}
