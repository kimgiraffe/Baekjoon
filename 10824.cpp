#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <string.h>
#include <cmath>

using namespace std;

int main(void)
{
	char A[15], B[15], C[15], D[15];
	cin >> A >> B >> C >> D;

	strcat(A, B);
	strcat(C, D);

	int A_len = strlen(A), C_len = strlen(C);

	long long ans = 0;

	for (int i = A_len - 1; i >= 0; i--) {
		ans += (A[i] -'0') * pow(10, A_len - i - 1);
	}

	for (int i = C_len - 1; i >= 0; i--) {
		ans += (C[i] - '0') * pow(10, C_len - i - 1);
	}

	cout << ans;

	return 0;
}