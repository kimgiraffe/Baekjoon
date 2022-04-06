#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int arr[9] = { 0, };

int main(void)
{
	int N;
	scanf("%d", &N);
	int r = 0;
	for (int i = 0; i < 9; i++) {
		arr[i] = N % 10;
		if (N / 10 == 0) break;
		N /= 10;
		r++;
	}

	for (int i = 0; i < r; i++) {

		if (arr[i] >= 5) {
			arr[i] = 0;
			arr[i + 1]++;
		}
		else {
			arr[i] = 0;
		}
	}

	for (int i = r; i >= 0; i--) {
		printf("%d", arr[i]);
	}

	return 0;
}