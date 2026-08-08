/*
take this string as input
input : aabcccccaaa
o/p -> a2 b1 c5 a3

*/

#include <iostream>
#include <string>
using namespace std;

void func(string str)
{
	int count=1;

	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] == str[i+1])
		{
			count++;
		}
		else
		{
			cout << str[i] << count << " ";
			count = 1;
		}
	}
}

int main()
{
	string str;
	cout << "Enter string: ";
	getline(cin, str);

	func(str);

	return 0;
}