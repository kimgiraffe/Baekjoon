#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int num) {
	int total;
	total = num * (num + 1) / 2;
	return total;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	int up, down;
	int i = 1;
	while (1) {
		if (n <= sum(i)) {
			break;
		}
		i++;
	}

	int s = n - sum(i - 1);
	if (i % 2 == 0) {
		up = s;
		down = i + 1 - up;
	}
	else {
		down = s;
		up = i + 1 - down;
	}

	printf("%d/%d\n", up, down);
	return 0;
}