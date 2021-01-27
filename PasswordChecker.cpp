#include <iostream>
#include <string>
using namespace std;
int main()
{
	int number, capital, small, special;
	string pass;
	while (number < 3 || capital < 1 || small < 2 || special < 2)
	{
		number = 0, capital = 0, small = 0, special = 0;
		cout << "Enter a password that contains at least 3 numbers, a capital letter, 2 small letters and 2 special characters: ";
		cin >> pass;
		for (int i = 0; i < pass.length(); i++)
		{
			if (pass.at(i) >= 48 && pass.at(i) <= 57)
				number++;
			if (pass.at(i) >= 65 && pass.at(i) <= 90)
				capital++;
			if (pass.at(i) >= 97 && pass.at(i) <= 122)
				small++;
			if ((pass.at(i) >= 33 && pass.at(i) <= 47) || (pass.at(i) >= 58 && pass.at(i) <= 64) || (pass.at(i) >= 91 && pass.at(i) <= 96) || (pass.at(i) >= 123 && pass.at(i) <= 126))
				special++;
		}
		if (number < 3)
			cout << "You only entered " << number << " numbers.\n";
		if (capital < 1)
			cout << "You entered no capital letter.\n";
		if (small < 2)
			cout << "You only entered " << small << " small letters.\n";
		if (special < 2)
			cout << "You only entered " << special << " special characters.\n";
		if (number < 3 || capital < 1 || small < 2 || special < 2)
			cout << endl;
	}
	cout << "\"" << pass << "\" is a valid password!\n";
	return 0;
}