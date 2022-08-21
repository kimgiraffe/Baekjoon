#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1001] = { 0, };

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	int k = 0, sum = 0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i; j++) {
			arr[k] = i;
			if (k >= 1000)
				break;
			k++;
		}
	}
	for (int i = A-1; i < B; i++) {
		sum += arr[i];
	}
	printf("%d\n", sum);
	return 0;
}