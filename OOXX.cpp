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
void OOXX::ChooseCoordinateO()
{
    while (true)
    {
        while (true)
        {
            cin >> PlayerInput;
            cout << "--------------" << endl;
            if (PlayerInput == 0)
            {
                cout << "The chart has been restarted!" << endl
                     << "--------------" << endl;
                ChartNumber[0] = "1";
                ChartNumber[1] = "2";
                ChartNumber[2] = "3";
                ChartNumber[3] = "4";
                ChartNumber[4] = "5";
                ChartNumber[5] = "6";
                ChartNumber[6] = "7";
                ChartNumber[7] = "8";
                ChartNumber[8] = "9";
                round = 1;
                break;
            }
            if (PlayerInput >= 10 || PlayerInput <= 0)
            {
                cout << "沒有此位置，重新輸入:" << endl;
            }
            else if (ChartNumber[PlayerInput - 1] == "O" || ChartNumber[PlayerInput - 1] == "X")
            {
                cout << "此位置已被輸入，重新輸入:" << endl;
            }
            else if (round % 2 == 1)
            {
                ChartNumber[PlayerInput - 1] = "O";
                round++;
                break;
            }
            else if (round % 2 != 1)
            {
                ChartNumber[PlayerInput - 1] = "X";
                round++;
                break;
            }
        }
        GameChart();
        cout << "--------------" << endl;
        Victory();
    }
}
