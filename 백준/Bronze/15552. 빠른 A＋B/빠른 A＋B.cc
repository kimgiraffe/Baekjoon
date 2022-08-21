#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b, sum = 0;
	int c;
	int i;
	scanf("%d", &c);
	for (i = 0; i < c; i++) {
		scanf("%d", &a);
		scanf("%d", &b);
		sum = a + b;
		printf("%d\n", sum);
		sum = 0;
	}
	
		
	

	return 0;
}