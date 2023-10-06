#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int x = 3, y = 2;
	char oper = ' ';
	cin >> oper;

	cout << "Operation result: ";
	if (oper == '+') {
		cout << (x + y);
	}
	else if (oper == '-') {
		cout << (x - y);
	}
	else if (oper == '*') {
		cout << (x * y);
	}
	else if (oper == '/') {
		cout << (x / y);
	}
	else if (oper == '%') {
		cout << (x % y);
	}
}

