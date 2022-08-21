#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n, x, i;
	int arr[10000] = { 0, };
	scanf("%d", &n);
	scanf("%d", &x);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++) {
		if (x > arr[i]) {
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	return 0;
}