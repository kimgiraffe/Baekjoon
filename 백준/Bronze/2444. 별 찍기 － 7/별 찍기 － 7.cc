#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = N; i > 0; i--) {
		for (int j = i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int k = N; k >= i; k--) {
			printf("*");
		}

		for (int k = N; k > i; k--) {
			printf("*");
		}

		printf("\n");


	}
	for (int i = 2; i <= N; i++) {
		for (int j = i - 1; j > 0; j--) {
			printf(" ");
		}
		for (int k = N; k >= i; k--) {
			printf("*");
		}

		for (int k = N; k > i; k--) {
			printf("*");
		}

		printf("\n");

	}

	return 0;
}