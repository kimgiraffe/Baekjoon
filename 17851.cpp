#include <iostream>
#include <algorithm>

using namespace std;

int A[5] = {};
int B[5] = {};
int cnt = 0;

int main(void)
{
	for (int i = 0; i < 5; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < 5; i++) {
		cin >> B[i];
	}

	sort(A, A + 5);
	sort(B, B + 5);

	for (int i = 0; i < 5; i++) {
		if (A[i] > B[i])
			cnt++;
	}

	cout << cnt;

	return 0;
}