#include <iostream>
using namespace std;

int intQuotient, number, divisor, intRemainder;

int main()
{
	int number;
	int divisor = 10000;
	cout << "Enter number (between 1 and 32767): ";
	cin >> number;
	//intQuotient = number / divisor;
	//intRemainder = number % divisor;
	while (number != 0)
	{
		intQuotient = number / divisor;
		intRemainder = number % divisor;
		if (intQuotient != 0)
		{
			cout << intQuotient << "  ";
			number = intRemainder;
		}
		divisor /= 10;
	}
	cout << endl;
}