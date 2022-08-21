#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Max(int n1, int n2, int n3) {
	return ((n1 > n2) ? (n1 > n3) ? n1 : n3 : ((n2 > n3) ? n2 : n3));
}

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int total = a + b + c;
	int MAX = Max(a, b, c);
	int l = total - MAX;
	while (true) {
		if (MAX < l)
			break;
		MAX--;
	}
		
	printf("%d\n", MAX+l);

	return 0;
}