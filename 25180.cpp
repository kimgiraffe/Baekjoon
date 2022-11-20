#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	int res = (N - 1) / 9 + 1;
	if (res % 2 == 0 && N % 2 == 1) {
		res++;
	}

	cout << res;

	return 0;
}