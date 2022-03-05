#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
long long B;
long long arr[5][5];
long long ans[5][5];
long long tmp[5][5];

void Matrix_mult(long long x[5][5], long long y[5][5])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			tmp[i][j] = 0;
			for (int k = 0; k < N; k++)
				tmp[i][j] += x[i][k] * y[k][j];

			tmp[i][j] %= 1000;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			x[i][j] = tmp[i][j];
		}
	}
}

int main(void)
{
	cin >> N >> B;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
		ans[i][i] = 1;
	}

	while (B > 0) {
		if (B % 2 == 1) {
			Matrix_mult(ans, arr);
		}
		Matrix_mult(arr, arr);
		B /= 2;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}