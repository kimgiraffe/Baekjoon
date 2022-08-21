#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int res = a / (c - b);
	if (b>=c) {
		printf("-1\n");
	}
	else{
		printf("%d\n", res+1);
	}
	
	return 0;
}