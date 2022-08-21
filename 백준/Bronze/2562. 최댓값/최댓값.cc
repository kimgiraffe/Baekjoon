#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[9] = { 0, };
	int i, count = 0;
	for (i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			count = i;
		}
	}

	printf("%d\n%d\n", max, count+1);

	return 0;
}