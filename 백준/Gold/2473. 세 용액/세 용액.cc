#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

long long a[5000];
long long int diff = 1e11;

int main(void)
{
	int N, a1, a2, a3;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	sort(a, a + N);

	for (int i = 0; i < N - 2; i++) {
		int mid = i + 1;
		int end = N - 1;
		while (mid < end) {

			long long ans = (long long)(a[mid] + a[end] + a[i]);
			if (diff > abs(ans)) {
				a1 = i;
				a2 = mid;
				a3 = end;
				diff = abs(ans);
			}
			if (ans > 0) end--;
			else mid++;
		}
	}

	cout << a[a1] << " " << a[a2] << " " << a[a3];

	return 0;
}