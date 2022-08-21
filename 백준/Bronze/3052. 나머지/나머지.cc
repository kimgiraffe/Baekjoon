#include<stdio.h>

int arr[10] = { 0, };

int main(void)
{
	int l[10];
	int i, j, count = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		l[i] = arr[i] % 42;
	}
	for (i = 0; i < 10; i++) {
		if (l[i] == -1) continue;
		for (j = i + 1; j < 10; j++) {
			if (l[i] == l[j]) {
				l[j] = -1;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		if (l[i] != -1) {
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}