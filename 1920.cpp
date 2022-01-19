#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_NUM 100001

int N, M;
int arr[MAX_NUM];

void binarySearch(int key) {
	int start = 0;
	int end = N - 1;
	int mid;

	while (end >= start) {
		mid = (start + end) / 2;
		if (arr[mid] == key) {
			printf("1\n");
			return;
		}
		else if (arr[mid] > key) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	printf("0\n");
	return;
}

int main(void)
{
	scanf("%d", &N);
	int tmp;
	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp);
		arr[i] = tmp;
	}

	sort(arr, arr + N);

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%d", &tmp);
		binarySearch(tmp);
	}

	return 0;
}