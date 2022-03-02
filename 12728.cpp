#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct {
	int arr[2][2];
} MATRIX;

MATRIX matrix_multiply_modular(MATRIX A, MATRIX B)
{
	MATRIX res;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			res.arr[i][j] = 0;
			for (int k = 0; k < 2; k++) {
				int tmp = (A.arr[i][k] * B.arr[k][j]) % 1000;
				if (tmp < 0) tmp += 1000;

				res.arr[i][j] = (res.arr[i][j] + tmp) % 1000;
			}
		}
	}
	return res;
}
MATRIX matrix_power_modular(MATRIX A, int power)
{
	MATRIX res;
	res.arr[0][0] = res.arr[1][1] = 1;
	res.arr[0][1] = res.arr[1][0] = 0;
	while (power) {
		if (power % 2) {
			res = matrix_multiply_modular(res, A);
		}
		A = matrix_multiply_modular(A, A);
		power /= 2;
	}

	return res;
}

int main(void)
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		int N;
		cin >> N;

		cout << "Case #" << i << ": ";
		if (N == 2) {
			cout << "027\n";
			continue;
		}

		MATRIX base;
		base.arr[0][0] = 0, base.arr[0][1] = 1, base.arr[1][0] = -4, base.arr[1][1] = 6;

		MATRIX ans;
		ans.arr[0][0] = 6, ans.arr[1][0] = 28, ans.arr[0][1] = ans.arr[1][1] = 0;

		int power = N - 2;
		base = matrix_power_modular(base, power);
		ans = matrix_multiply_modular(base, ans);

		int ANS = ans.arr[1][0] - 1;
		if (ANS == 0) {
			cout << "000\n";
		}
		else if (ANS < 10) {
			cout << "00" << ANS << "\n";
		}
		else if (ANS < 100) {
			cout << "0" << ANS << "\n";
		}
		else {
			cout << ANS << "\n";
		}
	}

	return 0;
}