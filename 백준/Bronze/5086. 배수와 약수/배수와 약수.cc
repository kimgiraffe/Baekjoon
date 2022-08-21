#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n1, n2;
	while (1) {
		scanf("%d %d", &n1, &n2);
		if (n1 + n2 == 0)
			break;
		else {
			if (n2 % n1 == 0) {
				printf("factor\n");
			}
			else if (n1 % n2 == 0) {
				printf("multiple\n");
			}
			else {
				printf("neither\n");
			}
		}
	}

	return 0;
}