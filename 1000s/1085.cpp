#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int min = x;
	int arr[4];
	arr[0] = x;
	arr[1] = w - x;
	arr[2] = y;
	arr[3] = h - y;
	for (int i = 0; i < 4; i++) {
		if (arr[i] < min) min = arr[i];
	}
	cout << min;
}