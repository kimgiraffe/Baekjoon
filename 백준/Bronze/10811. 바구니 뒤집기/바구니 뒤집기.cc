#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	int arr[101];
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
	for (int t = 1; t <= M; t++) {
		int i, j;
		cin >> i >> j;
		for (int k = 0; k <= (j - i) / 2; k++) {
			swap(arr[k + i], arr[j - k]);
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}