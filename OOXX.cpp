#include "OOXX.h"
#include<iostream>
using namespace std;
OOXX::OOXX(){}
OOXX::OOXX(int _PlayerInput)
{
	PlayerInput = _PlayerInput;
}
void OOXX::GameChart()
{
	int set = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((i == 0 || i == 2 || i == 4) && (j == 1 || j == 3))
				cout << "|";

			if ((i == 1 || i == 3) && (j == 0 || j == 2 || j == 4))
				cout << "-";

			if ((i == 1 || i == 3) && (j == 1 || j == 3))
				cout << "+";

			if ((i == 0 || i == 2 || i == 4) && (j == 0 || j == 2 || j == 4))
			{
				cout << ChartNumber[set];
				set++;
			}
		}
		cout << endl;
	}

}
