#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct time {
	int h, m, s;
}c[3];

int main(void)
{
	for (int i = 0; i < 2; i++) {
		scanf("%d", &c[i].h);
		scanf(":");
		scanf("%d", &c[i].m);
		scanf(":");
		scanf("%d", &c[i].s);
	}

	int c0 = c[0].h * 3600 + c[0].m * 60 + c[0].s;
	int c1 = c[1].h * 3600 + c[1].m * 60 + c[1].s;
	int c2 = 0;
	if (c0 <= c1) {
		c2 = c1 - c0;
	}
	else {
		c2 = c1 + 24*3600 - c0;
	}
	c[2].h = c2 / 3600;
	if (c[2].h >= 10)
		printf("%d", c[2].h);
	else if (0 < c[2].h < 10)
		printf("0%d", c[2].h);
	else
		printf("00");
	printf(":");

	c[2].m = (c2 % 3600) / 60;
	if (c[2].m >= 10)
		printf("%d", c[2].m);
	else if (0 < c[2].m < 10)
		printf("0%d", c[2].m);
	else
		printf("00");
	printf(":");
	c[2].s = c2 % 60;
	if (c[2].s >= 10)
		printf("%d", c[2].s);
	else if (0 < c[2].s < 10)
		printf("0%d", c[2].s);
	else
		printf("00");

	return 0;
}