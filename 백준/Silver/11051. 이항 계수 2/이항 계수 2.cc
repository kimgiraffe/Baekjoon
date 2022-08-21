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


	return pas[i][j] = (binomial(i - 1, j - 1) + binomial(i - 1, j)) % 10007;
}

int main(void)
{
	long long N, K;
	scanf("%lld %lld", &N, &K);
	printf("%lld\n", binomial(N,K));

	return 0;
}