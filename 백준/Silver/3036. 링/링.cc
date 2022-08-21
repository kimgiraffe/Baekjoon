#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int arr[101];

void comp(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int gcd(int num1, int num2)
{
	return num2 ? gcd(num2, num1 % num2) : num1;
}

int main(void)
{
	int i, N;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 1; i < N; i++) {
		if (arr[0] < arr[i])
			comp(arr[0], arr[i]);
		printf("%d/%d\n", arr[0] / gcd(arr[0], arr[i]), arr[i] / gcd(arr[0], arr[i]));
	}

	return 0;
}