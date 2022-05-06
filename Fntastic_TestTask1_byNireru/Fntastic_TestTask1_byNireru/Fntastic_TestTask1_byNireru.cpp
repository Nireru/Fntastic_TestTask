#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{

	string original_str, converted_str, temp_str, strchars, strcharsamonut;

	cout << "Write your string:\t";
	getline(cin, original_str);

	for (int i = 0; i < original_str.length(); i++)
	{
		temp_str.push_back(tolower(original_str[i]));
	}

	for (int i = 0; i < temp_str.length(); i++)
	{
		for (int j = 0; j < temp_str.length(); j++)
		{
			if (j >= strchars.length())
			{
				strchars.push_back(temp_str[i]);
				strcharsamonut.push_back('0');
				break;
			}
			if (temp_str[i] == strchars[j])
			{
				strcharsamonut[j] = '1';
				break;
			}


		}

	}

	for (int i = 0; i < temp_str.length(); i++)
	{
		for (int j = 0; j < temp_str.length(); j++)
		{
			if (temp_str[i] == strchars[j]) 
			{
				if (strcharsamonut[j] == '0') 
				{
					converted_str.push_back('(');
					break;
				}
				else 
				{
					converted_str.push_back(')');
					break;
				}
			}
		}
	}

	cout << "Original string:\t" << original_str << "\n";
	cout << "Converted string:\t" << converted_str << "\n";
	cout << "Legend: \"(\" - one time seen symbol, \")\" - multiple times seen symbol.\n";


	return 0;

}