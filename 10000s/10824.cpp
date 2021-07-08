#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b, c, d;
	long long num1 = 0, num2 = 0;
	cin >> a >> b >> c >> d;
	for (int i = 0; i < (a + b).length(); i++) {
		long long dec = 1;
		for (int j = 0; j < (a + b).length() - i - 1; j++) {
			dec *= 10;
		}
		num1 += ((a + b)[i] - '0') * dec;
	}
	for (int i = 0; i < (c + d).length(); i++) {
		long long dec = 1;
		for (int j = 0; j < (c + d).length() - i - 1; j++) {
			dec *= 10;
		}
		num1 += ((c + d)[i] - '0') * dec;
	}
	cout << num1 + num2;
	
}