#include <iostream>
using namespace std;

int main() {
	int T, H, W, N;
	int x, y;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		y = N % H;
		x = N / H + 1;
		if (y == 0) {
			y = H;
			x = N / H;
		}
		cout << 100 * y + x << "\n";
	}
	return 0;
}