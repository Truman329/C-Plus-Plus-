#include <iostream>
using namespace std;
int main()

{
	int x,number = 1;

	for (x = 1; x <= 15; x += 2)
	{
		number = number * x;
	}
	cout << "the product of odd interger from 1 to 15" << number;
	
	return 0;
}