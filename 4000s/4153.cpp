#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
	int a = -1, b = -1, c = -1, r;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;
		r = std::max(std::max(a, b), c);
		if (a * a + b * b + c * c == 2 * r * r) cout << "right\n";
		else cout << "wrong\n";
	}
}