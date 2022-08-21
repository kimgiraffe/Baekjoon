#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[51] = { 0, };
int B[51] = { 0, };

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d %d", &A[i], &B[i]);
	}

	for (int i = 1; i <= N; i++) {
		int rank = 1;
		for (int j = 1; j <= N; j++) {
			if (A[i] < A[j] && B[i] < B[j])
				rank++;
		}
		printf("%d\n", rank);
	}

	return 0;
}