#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	if (B.size() > A.size()) swap(A, B);
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	string C(A);
	int temp;
	int carry = 0;
	for (int i = 0; i < B.size(); i++) {
		C[i] = (A[i] - '0' + B[i] - '0' + carry) % 10 + '0';
		carry = (A[i] - '0' + B[i] - '0' + carry) / 10;
	}
	for (int i = B.size(); i < A.size(); i++) {
		C[i] = (A[i] - '0' + carry) % 10 + '0';
		carry = (A[i] - '0' + carry) / 10;
	}
	if (carry > 0) C.push_back(carry + '0');
	reverse(C.begin(), C.end());
	cout << C;
}