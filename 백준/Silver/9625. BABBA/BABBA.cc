#include <iostream>

using namespace std;

long long a[46] = {};
long long b[46] = {};

int main(void)
{
	int K;
	cin >> K;

	a[1] = 0;
	a[2] = 1;

	b[1] = 1;
	b[2] = 1;


	for (int i = 3; i <= K; i++) {
		a[i] = a[i - 1] + a[i - 2];
		b[i] = b[i - 1] + b[i - 2];
	}

	cout << a[K] << ' ' << b[K];

	return 0;
}