#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long long pas[1001][1001];

long long binomial(long long i, long long j)
{
	if (pas[i][j] > 0)
	{
		return pas[i][j];
	}

	if (j == 0 || i == j)
	{
		return 1;
	}


	return pas[i][j] = (binomial(i - 1, j - 1) + binomial(i - 1, j));
}

int main(void)
{
	long long N, K;
	long long T;
	scanf("%lld", &T);
	for (int i = 0; i < T; i++) {
		scanf("%lld %lld", &K, &N);
		printf("%lld\n", binomial(N, K));
	}

	return 0;
}