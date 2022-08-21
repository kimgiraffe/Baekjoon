#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long F[91];
long long Fib(int num);

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%lld", Fib(n));

	return 0;
}

long long Fib(int num) {
	if (num == 1)
		return 1;
	else if (num == 2)
		return 1;
	else if (F[num] != 0)
		return F[num];
	else
		F[num] =  Fib(num - 2) + Fib(num - 1);
	return F[num];
}