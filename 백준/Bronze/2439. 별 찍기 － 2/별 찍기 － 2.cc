#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j < n - i - 1) printf(" ");
			else printf("*");
		}
		printf("\n");
	}

	return 0;
}