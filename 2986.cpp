#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, div = 1;
	cin >> N;

	for (int i = 2; i*i <= N; i++) {
		if (N % i == 0) {
			div = N / i;
			break;
		}
	}
	cout << N - div;

	return 0;
}