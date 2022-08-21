#include <iostream>

using namespace std;

int main(void)
{
	int N, C, K, res = 0;
	cin >> N;
	while (N--) {
		cin >> C >> K;
		res += C * K;
	}

	cout << res;
	return 0;
}