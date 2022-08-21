#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = N; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}