#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, arr[5], sum = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		
		sum += arr[i] * arr[i];
	}


	printf("%d", sum % 10);
	return 0;
}