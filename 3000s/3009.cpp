#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int arr[4][2];
	for (int i = 0; i < 3; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	if (std::min(arr[0][0], arr[1][0]) == arr[2][0]) arr[3][0] = std::max(arr[0][0], arr[1][0]);
	else if (std::max(arr[0][0], arr[1][0]) == arr[2][0]) arr[3][0] = std::min(arr[0][0], arr[1][0]);
	else arr[3][0] = arr[2][0];

	if (std::min(arr[0][1], arr[1][1]) == arr[2][1]) arr[3][1] = std::max(arr[0][1], arr[1][1]);
	else if (std::max(arr[0][1], arr[1][1]) == arr[2][1]) arr[3][1] = std::min(arr[0][1], arr[1][1]);
	else arr[3][1] = arr[2][1];
	
	cout << arr[3][0] << " " << arr[3][1];
}