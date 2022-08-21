#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	char str[100] = { 0, };
	int count = 0;
	scanf("%s", &str);
	for (int i = 0; i < 101; i++) {
		if (str[i] == 0)
			break;
		else if (str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u') {
			count++;
		}

	}
	printf("%d", count);
	return 0;
}