#include <iostream>
#include "calculator.h"

using namespace std;

void Calculator(double x, double y, char oper)
{
	x = x;
	y = y;
	oper = oper;

	switch (oper)
	{
	case '+':
		sum = x + y;
		break;
	case '-':
		sum = x - y;
		break;
	case '*':
		sum = x * y;
		break;
	case '/':
		if (y != 0) {
			sum = x / y;
		}
		else {
			cout << "0으로 나눌수 없습니다." << endl;
			sum = 0;
		}
		break;
	}
};