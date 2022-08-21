#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long int N, sum = 0;
	scanf("%lld", &N);

	for (long long int i = 1; i < N; i++) {
		sum += (N + 1) *i;
	}
	printf("%lld", sum);
	return 0;
}