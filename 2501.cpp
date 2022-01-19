#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, K;
	scanf("%d %d", &N, &K);
	int i, count = 0;
	for (i = 1; i <= N; i++) {
		if (N%i == 0) {
			count++;
		}
		if (count == K)
			break;
				
	}
	if (i <= N)
		printf("%d", i);
	else
		printf("%d", 0);

	return 0;
}