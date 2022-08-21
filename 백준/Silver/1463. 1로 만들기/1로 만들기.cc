#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min(int a, int b) {
	return a > b ? b : a;
}

int main(void) {

	int arr[1000001] = { 0, };
	int i, N;

	scanf("%d", &N);

	arr[1] = 0;
	for (i = 2; i <= N; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0) 
			arr[i] = min(arr[i], arr[i / 2] + 1);
		if (i % 3 == 0) 
			arr[i] = min(arr[i], arr[i / 3] + 1);
	}

	printf("%d\n", arr[N]);

	return 0;
}