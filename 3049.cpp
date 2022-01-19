#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);
	long long res = (N * (N - 1)*(N - 2)*(N - 3)) / 24;
	printf("%lld", res);

	return 0;
}