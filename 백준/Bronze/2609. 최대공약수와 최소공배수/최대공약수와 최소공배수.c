#include<stdio.h>

int main(void)
{
	int n1, n2;
	int gcd, g1, g2;
	scanf("%d %d", &n1, &n2);
	if (n1 >= n2) {
		for (int i = 1; i <= n2; i++) {
			if (n1%i == 0 && n2%i == 0)
				gcd = i;
		}
	}
	else {
		for (int i = 1; i <= n1; i++) {
			if (n1%i == 0 && n2%i == 0)
				gcd = i;
		}
	}
	int lcm = gcd * (n1 / gcd) * (n2 / gcd);
	printf("%d %d\n", gcd, lcm);
	return 0;
}