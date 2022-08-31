#include <iostream>

using namespace std;

constexpr int MAX = 10'001;
int N, K;
int A[MAX];

int bubble_sort()
{
	int cnt = 0;

	for (int last = N; last > 1; --last) {
		for (int i = 1; i < last; ++i) {
			if (A[i] > A[i + 1]) {
				int tmp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = tmp;
				cnt++;
				if (cnt == K) return cnt;
			}
		}
	}
	return -1;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> K;
	for (int i = 1; i <= N; ++i) {
		cin >> A[i];
	}
	if (bubble_sort() == -1) {
		cout << -1;
	}
	else {
		for (int i = 1; i <= N; ++i) {
			cout << A[i] << ' ';
		}
	}

	return 0;
}