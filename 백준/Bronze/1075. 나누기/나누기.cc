#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, F;
	scanf("%d %d", &N, &F);

	int tmp = N - N % 100;
	int i;
	for (i = 0; i < 100; i++) {
		if ((tmp + i) % F == 0)
			break;
	}
	if (i < 10)
		printf("0%d\n", i);
	else
		printf("%d\n", i);
	return 0;
}