#include <iostream>
using namespace std;

int main() {
	int a[10] = { 17, 31, 57, 79, 41, 11, 71, 5, 44, 68 };
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (a[i] > a[j]) { swap(a[i], a[j]); }
		}
	}
	for (auto i : a) { cout << i << " "; }
	return 0;
}
