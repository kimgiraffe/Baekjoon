#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int FA(int num)
{
	int count =1;
	int i = 1;
	while (num / i >= 10) {
		count++;
		i *= 10;
	}
	return num / i * count;
	
}



int main(void)
{
	int x;
	scanf("%d", &x);

	printf("FA\n");

	return 0;
}