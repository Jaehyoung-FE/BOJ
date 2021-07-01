#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int N, M, K;
	cin >> N >> M >> K;
	int ans = 0;
	while (1) {
		int g = ans * 2;
		int b = ans;
		if (g + b > N + M - K || g > N || b > M)
			break;
		ans++;
	}
	cout << --ans;
}