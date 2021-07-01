#define _USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define pi M_PI

int main() {
	double r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << pi * r * r << "\n" << 2 * r * r;
}