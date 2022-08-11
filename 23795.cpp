#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long sum = 0;
	while (true) {
		int N;
		cin >> N;
		if (N == -1) break;
		sum += N;
	}
	cout << sum;
}