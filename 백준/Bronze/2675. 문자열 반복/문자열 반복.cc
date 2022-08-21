#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	int T, R, i, j, k;
	char str[21];

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d", &R);
		scanf("%s", str);
		int len = strlen(str);
		for (j = 0; j < len; j++) {
			for (k = 0; k < R; k++) {
				printf("%c", str[j]);
			}		
		}
		printf("\n");
	}

	return 0;
}