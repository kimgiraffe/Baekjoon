#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	int d0 = n1 % 10;
	int d1 = (n1 % 100) / 10;
	int d2 = n1 / 100;
	int N1 = d0 * 100 + d1 * 10 + d2;

	int di0 = n2 % 10;
	int di1 = (n2 % 100) / 10;
	int di2 = n2 / 100;
	int N2 = di0 * 100 + di1 * 10 + di2;

	printf("%d\n", (N1 > N2) ? N1 : N2);
	return 0;
}