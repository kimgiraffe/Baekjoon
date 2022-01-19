#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d, x, y;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	x = (a + b + c + d) / 60;
	y = (a + b + c + d) % 60;
	printf("%d\n%d", x, y);

	return 0;
}