#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, I;
	scanf("%d %d", &A, &I);
	printf("%d", A*(I - 1) + 1);

	return 0;
}