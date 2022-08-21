#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int p[101] = { 0, };

int main(void)
{
	int N, i, seat_num, cnt = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &seat_num);
		if (p[seat_num] == 1)
			cnt++;
		p[seat_num] = 1;
	}

	printf("%d\n", cnt);
	return 0;
}