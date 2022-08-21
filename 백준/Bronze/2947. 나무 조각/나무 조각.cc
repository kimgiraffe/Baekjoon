#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int A[6] = { 0, };

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
			if (A[i] > A[i + 1]) {
				tmp = A[i];
				A[i] = A[i + 1];
				A[i + 1] = tmp;
			
				for (int j = 0; j < 5; j++) {
					printf("%d ", A[j]);
				}
				printf("\n");
			}

		}
	}

	return 0;
}