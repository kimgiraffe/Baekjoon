#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[5] = { 0, };

int main(void) {
	int tmp, check = 1;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &A[i]);
	}
	while (check!=0)
	{
		check = 0;
		for (int i = 0; i < 5; i++) {
			if (A[i] != i + 1)
				check = 1;
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4 - i; j++) {
				if (A[j] > A[j + 1]) {
					tmp = A[j];
					A[j] = A[j + 1];
					A[j + 1] = tmp;

					for (int k = 0; k < 5; k++) {
						printf("%d ", A[k]);
					}
					printf("\n");
				}
			}
		}
	}



	return 0;
}