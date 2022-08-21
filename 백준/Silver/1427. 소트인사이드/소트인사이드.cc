#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main(void)
{
	char arr[10];
	int i, j;


	scanf("%s", arr);

	for(i=9;i>=0;i--)
		for (j = 0; j < strlen(arr); j++) {
			if (arr[j] == i + 48)
				printf("%c", arr[j]);
		}


	return 0;
}