#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	while (T--) {
		int a, b, gcd, lcm;
		scanf("%d %d", &a, &b);
		if (a >= b) {
			for (int i = 1; i <= b; i++) {
				if (a%i == 0 && b%i == 0)
					gcd = i;
			}
		}
		else {
			for (int i = 1; i <= a; i++) {
				if (a%i == 0 && b%i == 0)
					gcd = i;
			}
		}
		lcm = gcd * (a / gcd) * (b / gcd);
		printf("%d %d\n", lcm, gcd);
	}

	return 0;
}