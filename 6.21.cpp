#include <iostream>
using namespace std;
int main()

{
	int number,time,x;
	cout << "How many number for you wanna check?" << endl;
	cin >> time;
	for (x = 1; x <= time; x++)
		{
		cout << "give me a number?" << endl;
		cin >> number;
		if (number % 2 == 0)
			cout << number << " is even " << endl;
			else
			{
			cout << number << " is odd " << endl;
			}
		}
		
	return 0;
}