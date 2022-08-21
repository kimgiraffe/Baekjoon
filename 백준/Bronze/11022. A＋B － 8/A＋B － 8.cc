#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int t, i;
	int a, b, sum = 0;
	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d", &a);
		scanf("%d", &b);
		sum = a + b;
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, sum);
		sum = 0;
	}

	return 0;
}