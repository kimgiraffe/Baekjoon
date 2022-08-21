#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int n;
	int arr[1000];
	float sum = 0.0;
	int M = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (M < arr[i]) {
			M = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		sum += (float)arr[i] / M * 100;
	}

	printf("%.2f\n", sum / n);
	return 0;
}
