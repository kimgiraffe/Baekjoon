#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int R1, R2, S;
	scanf("%d %d", &R1, &S);
	R1 = S * 2 - R1;
	printf("%d", R1);

	return 0;
}