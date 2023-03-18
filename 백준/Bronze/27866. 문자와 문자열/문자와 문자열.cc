#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[1002];
	int i;

	scanf("%s %d", str, &i);
	printf("%c\n", str[i - 1]);

	return 0;
}