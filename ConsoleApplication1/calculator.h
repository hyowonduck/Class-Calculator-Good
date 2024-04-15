#define calculator_h

using namespace std;

class Calculator {
private:
	double x;
	double y;
	char oper;
	double sum;

public:
	Calculator();
	void calculate(double x, double y, char oper);
	void reset();
	void display();
	double get_sum();
};