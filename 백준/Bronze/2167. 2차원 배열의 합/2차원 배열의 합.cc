#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[301][301] = { 0, };

int main(void)
{
	int N, M, K, sum = 0, x1, y1, x2, y2;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	scanf("%d", &K);
	for (int i = 0; i < K; i++) {
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (int a = x1 - 1; a <= x2 - 1; a++) {
			for (int b = y1 - 1; b <= y2 - 1; b++) {
				sum += arr[a][b];
			}
		}
		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}