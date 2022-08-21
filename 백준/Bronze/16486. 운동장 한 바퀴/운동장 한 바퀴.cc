#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int d1, d2;
	scanf("%d %d", &d1, &d2);

	double res = 2 * d1 + 2 * 3.141592 * d2;
	printf("%.6lf", res);
	return 0;
}