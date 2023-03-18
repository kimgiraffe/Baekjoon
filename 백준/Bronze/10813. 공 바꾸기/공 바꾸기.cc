#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A[101] = { 0, };
	int N, M, i, j, tmp;
	scanf("%d %d", &N, &M);

	for (int idx = 1; idx <= N; idx++) {
		A[idx] = idx;
	}

	for (int t = 1; t <= M; t++) {
		scanf("%d %d", &i, &j);
		tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
	}

	for (int t = 1; t <= N; t++) {
		printf("%d ", A[t]);
	}

	printf("\n");

	return 0;
}