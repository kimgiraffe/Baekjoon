#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MAX(a,b) (a > b) ? a:b;
int P[101][100001];
int W[101];
int V[101];

int main(void)
{
	int n, k;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++)
		scanf("%d %d", &W[i], &V[i]);

	for (int i = 1; i <= n; i++) {
		for (int w = 1; w <= k; w++) {
			if (W[i] <= w) {
				P[i][w] = MAX(P[i - 1][w], V[i] + P[i - 1][w - W[i]]);
			}
			else {
				P[i][w] = P[i - 1][w];
			}
		}
	}
	printf("%d", P[n][k]);


	return 0;
}

