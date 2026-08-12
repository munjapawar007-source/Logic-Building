/*
Q.1 Write a program which accept a string from user and return the count of number of words in that string.

Input: Maze gaon kokan ahe. Mazya gavashejari samudra ahe.
Output: 8

Input:
Output: 0

Author: Vaibhav
*/

#include <iostream>
#include <string>
using namespace std;

int check_words_in_string(string str);

int main()
{
    string str;
    std::cout << "Enter string: ";
    getline(cin, str);

    std::cout << "Number of words in string: " << check_words_in_string(str) << std::endl;

    return 0;
}

int check_words_in_string(string str)
{
    int count_w = 1;

    for(int i = 0; i <= str.length(); i++)
    {
        if(str[i] == ' ' && str[i+1] != ' ')
         {
            count_w++;
         }   
    }

    return count_w;

}


