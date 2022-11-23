#include <iostream>
#include <string>
using namespace std;

string Delete(string& s)
{
	for (size_t i = 0; i < s.size(); i++) {

		if (s[i] < '0' || s[i] > '9' &&
			s[i] < 'A' || s[i] > 'Z' &&
			s[i] < 'a' || s[i] > 'z')
		{
			s.erase(i, 1);
			i--;
		}
	}
	return s;
}

string Lower(string& s)
{
	for (size_t i = 0; i < s.size(); i++) {

		s[i] = tolower(s[i]);
	}
	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << endl;
	size_t found = str.find(' ');
	string substring = str.substr(0, found);
	cout << Delete(substring) << endl;
	cout << endl;
	cout << Lower(substring);
	cout << endl;
	return 0;
}
