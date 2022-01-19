#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rev(int num)
{
	if (num < 10) {
		return num;
	}
	else if (num >= 10 && num < 100) {
		return (num % 10) * 10 + num / 10;
	}
	else if (num >= 100 && num < 1000) {
		return (num % 10) * 100 + ((num % 100) / 10) * 10 + num / 100;
	}
	else {
		return (num % 10) * 1000 + ((num % 100) / 10) * 100 + ((num % 1000) / 100) * 10 + num / 1000;
	}
}

int main(void)
{
	int X, Y;
	scanf("%d %d", &X, &Y);

	printf("%d", rev(rev(X) + rev(Y)));

	return 0;
}