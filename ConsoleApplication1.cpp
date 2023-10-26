#include <iostream>

using namespace std;

enum class Exc {
	div_error,
	sqrt_error,
	log_error,

};

enum class Exc2 {
	div_error,
	sqrt_error,
	log_error,

};


int delenie(int x, int y) {
	if (y != 0) return x / y;
	throw Exc::div_error;
}

int main() {
	int x, y;
	cin >> x >> y;
	try {
		cout << delenie(x, y);
	}
	catch (Exc e) {
		if (e == Exc::div_error) {
			cout << "Div 0";
		}
		else if (e == Exc::sqrt_error) {
			cout << "Sqrt exception, wrong art";
		}
	}
	catch (logic_error& e) {
		cout << "Logic_error" << endl;
		cout << e.what() << endl;
		cout << typeid(e).name();
	}
	catch (exception& e) {
		cout << "Exception\n";
		cout << e.what() << endl;
		cout << typeid(e).name();
	}
	catch (int e) {
		cout << "Integer\n";
		cout << e;
	}
	catch (const char& e) {
		cout << "String\n";
		cout << e;
	}
	catch (...) {
		cout << "Some other exception\n";
	}
}