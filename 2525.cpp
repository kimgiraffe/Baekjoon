#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{	
	int A, B;
	scanf("%d %d", &A, &B);
	int C;
	scanf("%d", &C);

	A+= (B + C) / 60;
	B = (B + C) % 60;
	
	printf("%d %d", A % 24, B);

	return 0;
}