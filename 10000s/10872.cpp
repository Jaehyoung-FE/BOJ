#include <iostream>
using namespace std;

int fact(int x) {
	if (x == 1) return 1;
	else return x * fact(x - 1);
}


int main() {
	int N;
	cin >> N;
	if (N != 0) cout << fact(N);
	else cout << 1;
}