#include <iostream>
#include <algorithm>

using namespace std;

struct Numbers {
	int number;
	string name;
};

int main() {
	int n, m;
	cin >> n;
	Numbers nums[100];
	for (int i = 0; i < n; ++i) {
		string name;
		int number;
		cin >> number >> name;
		nums[i].number = number;
		nums[i].name = name;
	}
	cin >> m;
	for (int i = 0; i < m; ++i) {
		int number;
		cin >> number;
		bool fl = 0;
		for (int j = 0; j < n; ++j) {
			if (nums[j].number == number) {
				cout << nums[j].name << endl;
				fl = 1;
				break;
			}
		}
		if (!fl) {
			cout << "No such number\n";
		}
	}
}