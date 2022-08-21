#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Factorial(int num)
{
	int i, result =1;
	if (num == 0) {
		return 1;
	}
	else {
		for (i = 1; i <= num; i++)
			result *= i;
		return result;
	}
	
}
int main(void)
{
	int N, K;
	scanf("%d %d", &N, &K);
	printf("%d\n", Factorial(N) / (Factorial(K) * Factorial(N - K)));

	return 0;
}