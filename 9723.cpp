#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	// freopen("input.txt", "r", stdin);
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i) {
		int A[3];
		for (int j = 0; j < 3; ++j) {
			cin >> A[j];
		}
		sort(A, A + 3);
		cout << "Case #" << i << ": ";
		if (A[0] * A[0] + A[1] * A[1] == A[2] * A[2]) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}