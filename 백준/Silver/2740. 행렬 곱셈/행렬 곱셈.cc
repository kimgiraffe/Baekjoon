#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr1[101][101];
int arr2[101][101];
int arr3[101][101];

int main(void)
{
	int N, M, K;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	scanf("%d %d", &M, &K);
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			for (int k = 0; k < M; k++) {
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}

	return 0;
}