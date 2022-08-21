#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n);
	for (i = n; i > 0; i--) {
		printf("%d\n", i);
	}

	return 0;
}