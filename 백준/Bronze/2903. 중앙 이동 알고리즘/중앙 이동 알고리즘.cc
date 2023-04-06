#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, n = 2, a = 1;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		n += a;
		a *= 2;
	}

	cout << n * n;

	return 0;
}