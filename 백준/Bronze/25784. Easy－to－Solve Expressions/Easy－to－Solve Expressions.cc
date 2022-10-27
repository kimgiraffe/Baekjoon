#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A[3];
	for (int i = 0; i < 3; ++i) {
		cin >> A[i];
	}

	sort(A, A + 3);
	if (A[0] + A[1] == A[2]) {
		cout << "1";
	}
	else if (A[0] * A[1] == A[2]) {
		cout << "2";
	}
	else {
		cout << "3";
	}

	return 0;
}