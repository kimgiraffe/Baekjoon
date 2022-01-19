#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = N; i >= 1; i--) {
		for (int k = i; k < N; k++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		for (int k = 1; k < i; k++) {
			printf("*");
		}
	
		printf("\n");
	}
	for (int i = 2; i <= N; i++) {
		for (int k = i; k < N; k++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		for (int k = 1; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}