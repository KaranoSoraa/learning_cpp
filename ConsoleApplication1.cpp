#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int a[100];

int main() {
	int n, m;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	cin >> m;
	for (int i = 0; i < m; ++i) {
		char operation;
		cin >> operation;
		int l,r;
		cin >> l >> r;
		switch (operation) {
		case 's': {
			int sum = 0;
			for (int j = l; j <= r; ++j) {
				sum += a[j];
			}
			cout << sum << endl;
		}
		break;
		}
		switch (operation) {
		case 'a': {
			int sum_a = 0;
			for (int j = l;j<= r; ++j) {
				sum_a += a[j];
			}
			cout << double(sum_a) / double(r - l + 1) << endl;
		}
		break;
		}
		switch (operation) {
		case 'm': {
			int ma = 0;
			for (int j = l; j <= r; ++j) {
				ma = max(ma, a[j]);
			}
			cout << ma << endl;
		}
		break;
		case 'r': {
			reverse(a + l, a + r + 1);
		}
		break;
		case 'u': {
			sort(a + l, a + r + 1);
		}
		break;
		case 'f': {
			int x;
			cin >> x;
			for (int j = l; j <= r; ++j) {
				if (a[j] == x) {
					cout << j << endl;
					break;
				}
			}
		}
		break;
		}
	}
}	

