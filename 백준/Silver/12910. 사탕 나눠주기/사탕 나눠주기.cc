#include <iostream>
#include <algorithm>

using namespace std;

int arr[51];
int n[51];

int main(void)
{
	int N, ans = 0, tmp = 0;
	cin >> N;

	for (int j = 1; j <= N; j++) {
		n[j] = 0;
	}

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);
	int M = arr[N - 1];

	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= M; j++) {
			if (arr[i] == j)
				n[j]++;
		}
	}

	for (int j = 1; n[j]!=0; j++) {
		if (j != 1 && n[j] == 1) {
			ans += tmp;
		}
		else if (j == 1 && n[j] == 1) {
			ans = 1;
			tmp = 1;
		}
		else if (j == 1 && n[j] != 1) {
			ans += n[j];
			tmp = ans;
		}
		else if (j != 1 && n[j] != 1) {
			tmp = tmp * n[j];
			ans += tmp;
		}

	}

	cout << ans;

	return 0;
}
