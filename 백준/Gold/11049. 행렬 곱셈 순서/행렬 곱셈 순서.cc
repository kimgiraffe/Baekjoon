#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <climits>
#define min(a,b) a<b ? a:b
int dp[501][501];

int main(void) {
	int n, r[501], c[501];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &r[i], &c[i]);
	}

	for (int i = 0; i < n; i++) {
		dp[i][i] = 0;
	}

	for (int d = 1; d < n; d++) {
		for (int i = 0; i < n - d; i++) {
			int j = i + d;
			dp[i][j] = INT_MAX;
			for (int k = i; k < j; k++)
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + r[i] * r[k + 1] * c[j]);
		}
	}
	printf("%d", dp[0][n - 1]);
	return 0;
}