#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	if (N == 1) {
		printf("*");
	}
	else {
		if (N % 2 == 1) {
			for (int i = N; i <= 2 * N - 1; i++) {
				for (int j = 1; j <= N / 2 + 1; j++) {
					printf("* ");
				}
				printf("\n");
				for (int k = 1; k <= N / 2; k++) {
					printf(" *");
				}
				printf("\n");
			}
		}
		if (N % 2 == 0) {
			for (int i = N; i <= 2 * N - 1; i++) {
				for (int j = 1; j <= N / 2; j++) {
					printf("* ");
				}
				printf("\n");

				for (int k = 1; k <= N / 2; k++) {
					printf(" *");
				}
				printf("\n");
			}
		}
	}
	return 0;
}