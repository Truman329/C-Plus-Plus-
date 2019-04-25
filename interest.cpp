#include <iostream>
#include <iomanip>
#include <cmath>
//this code finds the amount of money you will make with your compound and saving account 
using namespace std;

int main()
{
	double start,rate,compound,newRate,final, x;


	cout << "what is your savings account balance?" << endl;
	cin >> start;
	cout << "what is your compound?" << endl;
	cin >> compound;
	for (x = 5; x < 11; x++)
	{
		rate = x / 100;
		newRate = 1 + (rate / compound);
		final = start * pow(newRate, compound);
		cout << "your interest amount for " << rate << "% equals to " << final << endl;
		
	}
	
	return 0;
}
