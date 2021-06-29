#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string oct;
	cin >> oct;
	for (int i = 0; i < oct.length(); i++) {
		if ((oct[i] - '0') < 2)
			if (i == 0)
				cout << oct[i];
			else
				cout << "00" << oct[i];
		else if ((oct[i] - '0') < 4)
			if (i == 0)
				cout << (oct[i] - '0') / 2 << (oct[i] - '0') % 2;
			else
				cout << '0' << (oct[i]-'0') / 2 << (oct[i]-'0') % 2;
		else
			cout << (oct[i] - '0') / 4 << (oct[i] - '0') % 4 / 2 << (oct[i] - '0') % 2;
	}
}