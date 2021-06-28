#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string str;
	int ans = 0;
	int mult = 1;
	cin >> str;
	for (int i = str.length() - 1; i >= 0; i--) {
		if (str[i] >= 'A')
			str[i] = str[i] - 'A' + '0' + 10;
		ans += (str[i] - '0') * mult;
		mult *= 16;
	}
	cout << ans;
}

