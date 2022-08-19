#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T, N;
	int dp[41] = { 0,1,1 };

	for (int i = 3; i < 41; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		if (N == 0) {
			printf("%d %d\n", 1, 0);
		}
		else if (N == 1) {
			printf("%d %d\n", 0, 1);
		}
		else {
			printf("%d %d\n", dp[N - 1], dp[N]);
		}
	}

	return 0;
}