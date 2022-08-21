#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int isPrime(int num) {
	if (num == 1) {
		return 0;
	}
	else if (num % 2==0 && num != 2) {
		return 0;
	}
	else if (num % 3 == 0 && num != 3) {
		return 0;
	}
	else if (num % 5 == 0 && num != 5) {
		return 0;
	}
	else if (num % 7 == 0 && num != 7) {
		return 0;
	}
	else if (num % 11 == 0 && num != 11) {
		return 0;
	}
	else if (num % 13 == 0 && num != 13) {
		return 0;
	}
	else if (num % 17 == 0 && num != 17) {
		return 0;
	}
	else if (num % 19 == 0 && num != 19) {
		return 0;
	}
	else if (num % 23 == 0 && num != 23) {
		return 0;
	}
	else if (num % 29 == 0 && num != 29) {
		return 0;
	}
	else if (num % 31 == 0 && num != 31) {
		return 0;
	}
	else {
		return 1;
	}
	
}

int main(void)
{
	int N;
	scanf("%d", &N);
	int arr[100];
	int i, count = 0;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		if (isPrime(arr[i]) == 1) {
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}