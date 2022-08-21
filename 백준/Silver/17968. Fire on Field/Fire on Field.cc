#include <iostream>

using namespace std;

int A[1001];

int main(void)
{
	int N;
	cin >> N;

	A[0] = 1;
	A[1] = 1;

	int k;
	for (int i = 2; i <= N; i++) {
		int t1 = 1;
		while (true) {
			for (k = 1; 2 * k <= i; k++) {
				int t2 = A[i - k];
				int t3 = A[i - 2 * k];
				if (t1 - t2 == t2 - t3)
					break;
			}
			if (2 * k > i)
				break;
			t1++;
		}
		A[i] = t1;
	}

	cout << A[N];

	return 0;
}