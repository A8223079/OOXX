#ifndef OOXX_H
#define OOXX_H
#include<string>
using namespace std;
class OOXX
{
private:
	int PlayerInput;
	int round = 1;
	string ChartNumber[9] = { "1","2","3","4","5","6","7","8","9" };
public:
	OOXX();
	OOXX(int);
	void GameChart();
	void ChooseCoordinateO();
	void Victory();

};
#endif
