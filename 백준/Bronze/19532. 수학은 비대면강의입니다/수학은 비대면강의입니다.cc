#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f, x, y;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	for (int i = -999; i <= 999; i++) {
		for (int j = -999; j <= 999; j++) {
			if (a * i + b * j == c && d * i + e * j == f) {
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d", x, y);
	return 0;
}