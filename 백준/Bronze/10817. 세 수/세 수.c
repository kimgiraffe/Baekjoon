#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && b >= c) {
		printf("%d\n", b);
	}

	else if (a <= b && b <= c) {
		printf("%d\n", b);
	}

	else if (b >= a && a >= c) {
		printf("%d\n", a);
	}

	else if (b <= a && a <= c) {
		printf("%d\n", a);
	}

	else if (b >= c && c >= a) {
		printf("%d\n", c);
	}

	else if (b <= c && c <= a) {
		printf("%d\n", c);
	}

	return 0;
}