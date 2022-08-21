#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[10] = { 0, };

int max(int n1, int n2)
{
	int result = n1 > n2 ? n1 : n2;
	return result;
}

int main(void)
{
	int N, r = 0;
	scanf("%d", &N);

	while (true) {
		arr[N % 10]++;
		if (N / 10 == 0) break;
		N /= 10;
	}

	int num = 0;
	for (int i = 0; i < 10; i++) {
		if (i != 6 && i != 9) {
			num = max(num, arr[i]);
		}
	}

	printf("%d\n", max(num, (arr[6] + arr[9] + 1) / 2));


	return 0;
}