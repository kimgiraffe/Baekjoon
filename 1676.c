#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, cnt = 0;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		if (i % 5 == 0) cnt++;
		if (i % 25 == 0)cnt++;
		if (i % 125 == 0) cnt++;
	}

	printf("%d", cnt);

	return 0;
}