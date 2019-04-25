#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int main()
{
	int b = 0;
	int x;
	int y;
	int z;
	int a;
	int c, d,f = 0,g,h;
	float percent = 0;
	int wins[1000] = {};
	int loses[1000] = {};
	int length[1000] = {};
	enum class Status {CONTINUE, WON, LOST};
	srand(static_cast<int>(time(0)));
	int myPoint{ 0 };
	Status gameStatus;
	for ( x = 0; x < 1000; x++)
	{
		
		int sumOfDice{ rollDice() };
		switch (sumOfDice)
		{
		case 7:
		case 11:
			gameStatus = Status::WON;
			wins[0] += 1;
			length[0] += 1;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = Status::LOST;
			loses[0] += 1;
			length[0] += 1;
			break;
		default:
			y = 1;
			gameStatus = Status::CONTINUE;
			myPoint = sumOfDice;
			cout << "Point is " << myPoint << endl;
			break;

		}
		while (Status::CONTINUE == gameStatus)
		{
			
			sumOfDice = rollDice();

			if (sumOfDice == myPoint)
			{
				gameStatus = Status::WON;
				length[y] += 1;
				wins[y] += 1;
			}

			else
			{
				if (sumOfDice == 7)
				{
					gameStatus = Status::LOST;
					length[y] += 1;
					loses[y] += 1;
				}
			}
			y++;

		}
		if (Status::WON == gameStatus)
		{
			cout << "Player wins" << endl;
		}
		else
		{
			cout << "Player loses" << endl;
		}
	}
		for (z = 0; z <= 21; z++)
		{
		cout << "Rolls	" << " W	" << "L " << endl;
		cout << z+1 << "	 " << wins[z] << "  	" << loses[z] << endl;
		}
		for (a = 0; a <= 21; a++)
		{
			percent += wins[a];
		}
		percent = percent / 10;
		cout << "The percent of you winning out of a 1000 is %" << percent <<  endl;

		for (a = 0; a <= 21; a++)
		{
			if (b > length[a])
			{
				b = length[a];
			}
		}
		cout << "The average length is " << b+1 << endl;

		for (h = 0; h <= 21; h++)
		{
			c = wins[h] + loses[h];
			d = wins[h] * 100 / c ;
			if (f < d)
			{
				f = d;
				g = length[h];
			}
		}
		cout << "The highest percent is during lenght " << g+1 << " with the percentage of " << f<< endl;

}


int rollDice()
{
	int die1{ 1 + rand() % 6 };
	int die2{ 1 + rand() % 6 };
	int sum{ die1 + die2 };
	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
	return sum;
}