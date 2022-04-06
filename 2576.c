#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[7], b[7], sum = 0, i, min;
	for (i = 0; i < 7; i++) {
		scanf("%d", &a[i]);
		if (a[i] % 2 == 1) {
			sum += a[i];
			b[i] = a[i];
			min = b[i];
		}
	}
	;
	for (i = 0; i < 7; i++) {
		if (b[i] > 0 && b[i] < min)
			min = b[i];
	}
	if (sum > 0)
		printf("%d\n%d", sum, min);
	else
		printf("-1");


	return 0;
}