#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int isPrime(int num) {
	int i, count = 0;
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		return 1;
	}
	else {
		return -1;
	}
}

int main(void)
{
	int M, N;
	scanf("%d %d", &M, &N);
	int sum = 0, arr[10000];
	int j = 0;
	for (int i = M; i <= N; i++) {
		if (isPrime(i) == 1) {
			sum += i;
			arr[j] = i;
			j++;
		}
	}
	if (sum == 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", sum);
		printf("%d\n", arr[0]);
	}

	return 0;
}