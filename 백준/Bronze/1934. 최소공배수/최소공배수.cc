#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void comp(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int gcd(int num1, int num2)
{
	return num2 ? gcd(num2, num1 % num2) : num1;
}

int main(void)
{
	int T, result;
	int i, n1, n2;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d", &n1, &n2);
		if (n1 < n2) {
			comp(n1, n2);
		}
		result = gcd(n1, n2);
		printf("%d\n", n1 * n2 /result);

	}

	return 0;
}