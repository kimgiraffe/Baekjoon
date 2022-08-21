#include <iostream>

using namespace std;

int main(void)
{
	long long N, S;
	while (cin >> N >> S) {
		cout << S / (N + 1) << '\n';
	}

	return 0;
}