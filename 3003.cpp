#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int k, q, r, b, kn, p;
	scanf("%d %d %d %d %d %d", &k, &q, &r, &b, &kn, &p);
	printf("%d %d %d %d %d %d", 1 - k, 1 - q, 2 - r, 2 - b, 2 - kn, 8 - p);

	return 0;
}