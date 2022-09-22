#include <iostream>
using namespace std;

int main() {
	int a[10] = { 23, 30, 45, 45, 67, 74, 92, 98, 140, 239 }; int l = 0, r = 9, m, k; cin >> k;
	while (r - l > 1) {
		m = (r + l) / 2;
		if (a[m] - k > 0) { r = m; }
		else { l = m; }
	}
	cout << a[l];
	return 0;
}
