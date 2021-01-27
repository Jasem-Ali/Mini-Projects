#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	cout << "Guess a number between 1 and 10.\n";
	srand((unsigned)time(0));
	int n, rightNum = (rand() % 10) + 1;
	for (int i = 5; i >= 1; i--)
	{
		if (n != rightNum && i > 1)
			cout << "You have " << i << " tries left : ";
		cin >> n;
		if (n < 1 || n > 10)
		{
			cout << "Invalid number; choose between 1 and 10 inclusively.\n";
			i++;
		}
		else if (n != rightNum && i > 2)
			cout << "Incorrect. Try again.\n";
		if (n != rightNum && i == 2)
			cout << "One more try. Be careful: ";
		if (n == rightNum)
		{
			cout << "Good job. You win a cake.\n";
			break;
		}
	}

	if (n != rightNum)
		cout << "You lose.\nThe correct number was: " << rightNum << endl;
}