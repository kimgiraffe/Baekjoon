#include <iostream>
#include <algorithm>

using namespace std;

int A[50] = {};
int B[50] = {};
int ans = 0;

bool comp(int i, int j) { return i > j; }

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}

	sort(A, A + N);
	sort(B, B + N, comp);

	for (int i = 0; i < N; i++) {
		ans += A[i] * B[i];
	}

	cout << ans;

	return 0;
}