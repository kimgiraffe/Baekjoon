#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int X_MAX = -10001, X_MIN = 10001, Y_MAX = -10001, Y_MIN = 10001;

int main(void)
{	
	int N, x, y;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		scanf("%d %d", &x, &y);
		if (x > X_MAX) X_MAX = x;
		if (x < X_MIN) X_MIN = x;
		if (y > Y_MAX) Y_MAX = y;
		if (y < Y_MIN) Y_MIN = y;
	}

	printf("%d\n", (X_MAX - X_MIN) * (Y_MAX - Y_MIN));

	return 0;
}