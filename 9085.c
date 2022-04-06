#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[100] = { 0, };

int main(void)
{
	int T, N, sum = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &a[i]);
			sum += a[i];
		}
		printf("%d\n", sum);
		sum = 0;
	}


	return 0;
}