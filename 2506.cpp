#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, t, sum = 0, count = 1;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &t);
		if (t == 1) {
			sum += count++;
		}
		else {
			count = 1;
		}
	}

	printf("%d\n", sum);

	return 0;
}