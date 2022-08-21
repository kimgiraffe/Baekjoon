#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void PrimeFactorization(int num) {
	int count = 2;
	if (num != 1) {
		while (1) {
			if (num % count == 0) {
				num /= count;
				printf("%d ", count);
				count = 2;
				continue;
			}
			else if (num != 1) {
				count++;
				continue;
			}
			else {
				break;
			}
		}
	}
	


}

int main(void)
{
	int N;
	scanf("%d", &N);
	
	PrimeFactorization(N);
	

	return 0;
}