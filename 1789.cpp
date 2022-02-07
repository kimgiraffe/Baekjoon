#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	long long S;
	cin >> S;
	long long sum = 0;
	long long N = 0;
	while (true) {
		sum = N * (N + 1) / 2;
		if (sum > S)
			break;

		N++;
	}
	cout << N - 1;
	return 0;
}