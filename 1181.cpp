#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char string[51];
	int len;
} str;

str sort[20001];
str arr[20001];

void merge(str arr[], int first, int mid, int last) {
	int i = first;
	int j = mid + 1;
	int k = first;

	while (i <= mid && j <= last) {
		if (arr[i].len < arr[j].len) {
			sort[k++] = arr[i++];
		}
		else if (arr[i].len > arr[j].len) {
			sort[k++] = arr[j++];
		}
		else {
			if (strcmp(arr[i].string, arr[j].string) < 0) {
				sort[k++] = arr[i++];
			}
			else {
				sort[k++] = arr[j++];
			}
		}
	}
	if (i <= mid) {
		while (i <= mid)
			sort[k++] = arr[i++];
	}
	else {
		while (j <= last)
			sort[k++] = arr[j++];
	}
	for (i = first; i <= last; i++)
		arr[i] = sort[i];	
}

void mergesort(str arr[], int first, int last) {
	int mid;
	if (first < last) {
		mid = (first + last) / 2;
		mergesort(arr, first, mid);
		mergesort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%s", &arr[i].string);
		arr[i].len = strlen(arr[i].string);
	}

	mergesort(arr, 0, N - 1);
	for (int i = 0; i < N; i++) {
		if (strcmp(arr[i].string, arr[i+1].string) != 0)
			printf("%s\n", arr[i].string);
	}
	return 0;
}