#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, m, cnt = 0;
	scanf("%d", &N);
	m = 1000 - N;

	int arr[6];
	arr[0] = m / 500;
	arr[1] = (m- (arr[0] * 500)) / 100;
	arr[2] = (m - (arr[0]* 500 + arr[1] * 100)) / 50;
	arr[3] = (m - (arr[0] * 500 + arr[1] * 100 + arr[2] * 50)) / 10;
	arr[4] = (m - (arr[0] * 500 + arr[1] * 100 + arr[2] * 50 + arr[3] * 10)) / 5;
	arr[5] = (m - (arr[0] * 500 + arr[1] * 100 + arr[2] * 50 + arr[3] * 10 + arr[4] * 5)) / 1;

	for (int i = 0; i < 6; i++) {
		cnt += arr[i];
	}

	printf("%d", cnt);
	return 0;
}