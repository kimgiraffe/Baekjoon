#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int a);

int main(void)
{
	int n;
	scanf("%d", &n);

	printf("%d", fibonacci(n));

	return 0;
}

/*int fibonacci(int a)
{
	if (a == 0) {
		return 0;
	}
	else if (a == 1) {
		return 1;
	}
	else {
		return fibonacci(a - 1) + fibonacci(a - 2);
	}
}
*/

int fibonacci(int n)
{
	int a = 0, b = 1, tmp;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	for (int i = 0; i < n - 1; i++) {
		tmp = b;
		b = a + b;
		a = tmp;
	}
	return b;

}