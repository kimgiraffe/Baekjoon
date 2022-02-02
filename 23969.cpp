#include <iostream>
#define SWAP(a, b) {int t; t = a; a = b; b = t;}

using namespace std;

long long list[10001] = {};
long long N;

void viewArr(long long list[], long long n)
{
	int i;
	for (i = 0; i < n; i++) {
		cout << list[i] << ' ';
	}
	cout << '\n';
}

void bubble_sort(long long list[], long long n)
{
	long long i, j, tmp, cnt = 0;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n-1; j++) {
			if (list[j] > list[j+1]) {
				SWAP(list[j], list[j+1]);
			}
		}
	}
}

int main(void)
{
	cin >> N;

	for (long long i = 0; i < N; i++) {
		cin >> list[i];
	}

	bubble_sort(list, N);

	viewArr(list, N);

	return 0;
}