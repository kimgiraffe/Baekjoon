#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int PrintStar(int a, int b, int num)
{
	int i, result=0;
	for (i = num / 3; i > 0; i /= 3) {
		if ((a / i) % 3 == 1) {
			if ((b / i) % 3 == 1) {
				result = 1;
			}
		}
	}
	return result;
}

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (PrintStar(i, j, N) == 1) {
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}