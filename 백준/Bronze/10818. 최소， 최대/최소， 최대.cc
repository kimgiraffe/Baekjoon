#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int n, i;
	int arr[1000000] = { 0, };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int min, max;
	min = arr[0];
	max = arr[0];

	for (i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	printf("%d %d\n", min, max);

	return 0;
}
