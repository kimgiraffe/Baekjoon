#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[11];

int main(void) {

	int N, K, m = 0;
	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = N; i > 0; i--) {
		m += K / arr[i];
		K %= arr[i];
	}
	printf("%d", m);
	return 0;
}