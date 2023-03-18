#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[101] = { 0, };
	int N, M, i, j, k;
	scanf("%d %d", &N, &M);

	for (int t = 1; t <= M; t++) {
		scanf("%d %d %d", &i, &j, &k);
		for (int x = i; x <= j; x++) {
			A[x] = k;
		}
	}

	for (int t = 1; t <= N; t++) {
		printf("%d ", A[t]);
	}
	printf("\n");

	return 0;
}