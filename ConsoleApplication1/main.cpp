#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
	Calculator calculator;
	char oper;
	double x, y;

	while (true) {
		cout << "계산할 수식 (예: 3 + 4): ";
		cin >> x >> oper >> y;

		if (oper == 'Q') {
			cout << "프로그램을 종료합니다." << endl;
			break;
		}
		else if (oper == 'C') {
			calculator.reset();
			cout << "계산기가 초기화 되었습니다." << endl;
		}
		else {
			calculator.calculate(x, oper, y);
			calculator.display();
		}
	}
	return 0;
}