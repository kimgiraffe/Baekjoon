#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[51] = { 0, };

int main(void)
{
	int a, i;
	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
	}
	int min = arr[0], max = arr[0];
	for (i = 0; i < a; i++) {
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}

	printf("%d", min * max);

	return 0;
}