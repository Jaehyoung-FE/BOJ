#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int L, P;
	cin >> L >> P;
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		cout << num - L * P << ' ';
	}
}

