#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void base(int n, int b) {
	if (n != 0) {
		base(n / b, b);
		if (n % b > 9 && b > 10)
			printf("%c", 'A' + (n%b) - 10);
		else
			printf("%d", n%b);
	}
}
int main() {
	int N, B;
	scanf("%d%d", &N, &B);
	base(N, B);
	printf("\n");
}