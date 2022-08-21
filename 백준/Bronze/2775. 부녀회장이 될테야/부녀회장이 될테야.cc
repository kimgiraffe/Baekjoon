#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int total(int K, int N) {
	int sum = 0;
	if (K == 0) {
		return N;
	}
	else {
		for (int i = 1; i <=  N; i++) {
			sum += total(K - 1, i);
		}
	}
	return sum;
}

int main(void)
{
	int T, k, n;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", total(k, n));
	}

	return 0;
}