#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	char a[101];
	int i;
	scanf("%s", a);
	int len = strlen(a);
	for (i = 0; i < len; i++) {
	
	
		if (a[i] == 'B') {
			printf("v");
		}
		else if (a[i] == 'E') {
			printf("ye");
		}
		else if (a[i] == 'H') {
			printf("n");
		}
		else if (a[i] == 'P') {
			printf("r");
		}
		else if (a[i] == 'C') {
			printf("s");
		}
		else if (a[i] == 'Y') {
			printf("u");
		}
		else if (a[i] == 'X') {
			printf("h");
		}
		else if(a[i] == 'A' || a[i] == 'K' || a[i] == 'M' || a[i] == 'O' || a[i] == 'T') {
			printf("%c" , a[i] + 'a' - 'A');
		}
	}
	

	return 0;
}