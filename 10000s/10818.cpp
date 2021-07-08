#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;
	
	int *arr = new int[N];
	int max = -1000000;
	int min = 1000000;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	cout << min << " " << max;
	return 0;
}