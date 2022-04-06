#include <iostream>
#include <algorithm>

using namespace std;

int A[1000001] = {};
int B[1000001] = {};
int C[2000001] = {};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		C[i] = A[i];
	}

	for (int i = 0; i < M; i++) {
		cin >> B[i];
		C[i + N] = B[i];
	}

	sort(C, C + N + M);

	for (int i = 0; i < N + M; i++) {
		cout << C[i] << " ";
	}

	return 0;
}