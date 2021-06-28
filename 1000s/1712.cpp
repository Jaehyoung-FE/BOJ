#include <iostream>
#include <string>
using namespace std;

int main() {
	int A, B, C, result;
	cin >> A >> B >> C;
	if (B >= C) result = -1;
	else result = A / (C - B) + 1;
	cout << result;
	return 0;
}