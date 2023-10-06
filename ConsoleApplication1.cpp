#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	double x, y;
	cout << "Enter x: ";
	cin >> x;
	char oper = ' ';
	cout << "Enter operation: ";
	cin >> oper;
	cout << "Enter y: ";
	cin >> y;

	cout << "Operation result: ";
	switch (oper) {
	case '+':
		cout << (x + y);
		break;
	case '-':
		cout << (x - y);
		break;
	case '*':
		cout << (x * y);
		break;
	case '/':
		cout << (x / y);
		break;
	dafault:
		cout << "No such operation";
	}
	
}

