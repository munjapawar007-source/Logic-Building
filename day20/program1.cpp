/*
Q.1 Write a program to check if a string is an anagram of another string.
An anagram is a word or phrase formed by rearranging the letters of another.

***a word or phrase that is made by arranging the letters of another word or phrase in a different order.****

Input 1: "listen"
Input 2: "silent"
Output: True

Input 1: "debit card"
Input 2: "bad credit"
Output: True

Input 1: "Race"
Input 2: "care"
Output: True

Input 1: " listen"
Input 2: "silent "
Output: True

Input 1: "hello"
Input 2: "world"
Output: False

Input 1: "12345"
Input 2: "21453"
Output: True

Input 1: "Marvel12345"
Input 2: "Rav15m2e34l"
Output: True

Author: munja
*/

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool check_anagram(string a, string b);
string remove_special_Chars(string str);
string &lower_char(string &str);

int main()
{
    string a, b;
    cout  << "\nEnter 1st string: ";
    getline(cin, a);
    cout << "Enter 2nd string: ";
    getline(cin, b);

    if(check_anagram(a,b))
        cout << "\nString is Anagram.\n";
    else
        cout << "\nString is not Anagram.\n";

    return 0;
}

string &lower_char(string &str)
{
    for (char &c : str)
    {
        if (c >= 'A' && c <= 'Z')
            c += 32; // convert upper case to lower case chars
    }

    return str;
}

string remove_special_chars(string str)
{
    string new_str;

    for (char &c : str)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            new_str.push_back(c);
    }
    return new_str;
}

bool check_anagram(string a, string b)
{
    unordered_map<char, int> ump;

    a = remove_special_chars(a);
    b = remove_special_chars(b);

    if (a.length() != b.length())
        return false;

    lower_char(a);
    lower_char(b);

    for (char &c : a)
    {
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            ump[c]++;
    }


    for(char &c : b)
    {
        if(((ump[c] == 0) && (c >= 'a' && c <= 'z')) || ((ump[c] == 0) && (c >= '0' && c <= '9')))
        return false;
    }

    return true;
}
