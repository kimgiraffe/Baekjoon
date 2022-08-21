#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

void merge(int* arr, int* sortedArr, int low, int mid, int high) {
	int sortedInd = low;
	int i = low;
	int j = mid + 1;


	while (i <= mid && j <= high) {
		if (arr[i] < arr[j]) sortedArr[sortedInd] = arr[i++];
		else  sortedArr[sortedInd] = arr[j++];

		sortedInd++;
	}

	//왼쪽이 오른쪽보다 모두 작은 경우
	if (i > mid) {
		while (j <= high) {
			sortedArr[sortedInd++] = arr[j++];
		}
	}
	//오른쪽이 왼쪽보다 모두 작은 경우
	if (j > high) {
		while (i <= mid) {
			sortedArr[sortedInd++] = arr[i++];
		}
	}

	for (int k = low; k <= high; k++) arr[k] = sortedArr[k];

}

void mergeSort(int* arr, int* sortedArr, int low, int high) {
	int mid;
	if (low < high) {
		mid = (low + high) / 2;
		mergeSort(arr, sortedArr, low, mid);
		mergeSort(arr, sortedArr, mid + 1, high);
		merge(arr, sortedArr, low, mid, high);
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int* sortedArr = new int[n];
	mergeSort(arr, sortedArr, 0, n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';

	return 0;
}