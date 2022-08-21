#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int L, P;
	int i, arr[5];
	scanf("%d %d", &L, &P);
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		arr[i] = arr[i] - L * P;
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}