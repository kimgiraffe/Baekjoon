#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include <algorithm>

long long int arr[5000000];

int main(void)
{
	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		scanf("%lld", &arr[i]);
	}

	sort(arr, arr + N);

	printf("%lld", arr[K-1]);

	return 0;
}