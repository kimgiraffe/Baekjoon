#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[8] = { 0, };
int b[8] = { 0, };
int main(void)
{
	int i, sum = 0, max = 0;
	for (i = 0; i < 8; i++) {
		scanf("%d", &a[i]);
	}
	b[0] = a[0];
	b[1] = a[0] + a[1];
	b[2] = a[0] + a[1] - a[2];
	b[3] = a[0] + a[1] - a[2] + a[3];
	b[4] = a[0] + a[1] - a[2] + a[3] - a[4];
	b[5] = a[0] + a[1] - a[2] + a[3] - a[4] + a[5];
	b[6] = a[0] + a[1] - a[2] + a[3] - a[4] + a[5] - a[6];
	b[7] = a[0] + a[1] - a[2] + a[3] - a[4] + a[5] - a[6] + a[7];

	for (i = 0; i < 8; i++) {
		if (b[i] > max)
			max = b[i];
	}
	printf("%d", max);


	return 0;
}