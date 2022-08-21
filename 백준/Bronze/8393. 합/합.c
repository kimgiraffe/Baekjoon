#include<stdio.h>

int main(void)
{
	int n, sum;
	scanf("%d", &n);
	sum = (n * (n + 1)) / 2;
	printf("%d\n", sum);
	return 0;
}