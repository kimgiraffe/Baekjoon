#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long N;
	cin >> N;
	cout << ((N - 1)*(N - 2)*(2 * N - 3) + 3 * (N - 1)*(N - 2)) / 12 << '\n';
	cout << 3;

	return 0;
}