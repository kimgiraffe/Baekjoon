#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, C, D;
	scanf("%d %d %d", &A, &B, &C);
	scanf("%d", &D);

	A = (A * 3600 + B * 60 + C + D) / 3600;
	B = ((A * 3600 + B * 60 + C + D) % 3600) / 60;
	C = (A * 3600 + B * 60 + C + D) % 60;

	printf("%d %d %d", A % 24, B, C);

	return 0;
}