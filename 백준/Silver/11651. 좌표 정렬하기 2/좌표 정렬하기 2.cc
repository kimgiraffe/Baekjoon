#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct {
	int x, y;
} coordinate;

int compare(const coordinate* const a, const coordinate* const b) {
	if (a->y == b->y)
		return (a->x > b->x ? 1 : (a->x == b->x) ? 0 : -1);
	else
		return (a->y > b->y ? 1 : -1);
}

void quickSort(coordinate *arr, int left, int right) {
	int i = left, j = right;
	coordinate tmp, pivot = arr[(left + right) / 2];

	while (i <= j) {
		while (compare(&pivot, arr + i) == 1) ++i;
		while (compare(arr + j, &pivot) == 1) --j;
		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			++i; --j;
		}
	}

	if (j > left) quickSort(arr, left, j);
	if (right > i) quickSort(arr, i, right);
}

int main(void)
{
	int N, i;
	scanf("%d", &N);
	coordinate* arr = (coordinate*)malloc(N * sizeof(coordinate));
	for (i = 0; i < N; i++) {
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	quickSort(arr, 0, N - 1);

	for (i = 0; i < N; i++) {
		printf("%d %d\n", arr[i].x, arr[i].y);
	}

	free(arr);

	return 0;
}