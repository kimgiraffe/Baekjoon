#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long T, N;
	cin >> T;
	while (T--) {
		cin >> N;
		cout << N * N << '\n';
	}

	return 0;
}