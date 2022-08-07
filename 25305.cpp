#include <iostream>
#include <algorithm>
using namespace std;

int a[1001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, k;
	cin >> N >> k;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	sort(a, a + N);
	cout << a[N - k];
	return 0;
}