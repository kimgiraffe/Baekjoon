#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	
	int d;

	if ((V - A) % (A - B)) {
		d = ((V - A) / (A - B) + 1) + 1;
	}
	else {
		d = ((V - A) / (A - B)) + 1;
	}
	printf("%d\n", d);
	return 0;
}