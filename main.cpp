#include<iostream>
#include<list>

using namespace std;

struct Node {
	int val = 0;
	Node* priv = nullptr;
	Node* next = nullptr;
};

int main() {
	int n;
	cin >> n;
	Node* first = new Node();
	Node* last = first;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		last->val = x;
		Node* new_last = new Node();
		new_last->priv = last;
		last->next = new_last;
		last = new_last;
	}
	for (auto it = first; it != last; it = it->next) {
		cout << it->val << ' ';
	}
	
	for (auto it = first, it2 = it->next; it != last; it = it2) {
		it2 = it->next;
		delete it;
	}
	delete last;
}