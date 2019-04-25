#include <iostream>
using namespace std;
int main()

{
	int  x,side,j;
	cout << "What is the side" << endl;
	cin >> side;
	for (x = 1; x <= side; x++)
	{
		for (j = 1; j <= side; j++)
		{
			cout << "*";
		}
		cout << endl;
		
	}

	return 0;
}