#include<stdio.h>

int main(void)
{
	int n, i, result=1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		result *= i;
	}
	printf("%d\n", result);

	return 0;
}