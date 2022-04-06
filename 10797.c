#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[5] = { 0, };

int main(void)
{
	int d, count = 0;
	scanf("%d", &d);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
		if (a[i] == d)
			count++;
	}
	printf("%d", count);

	return 0;
}