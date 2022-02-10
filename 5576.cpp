#include <iostream>
#include <algorithm>

using namespace std;

int W[10] = {};
int K[10] = {};
int main(void)
{
	for (int i = 0; i < 10; i++) {
		cin >> W[i];
	}

	for (int i = 0; i < 10; i++) {
		cin >> K[i];
	}

	sort(W, W + 10);
	sort(K, K + 10);

	cout << W[7] + W[8] + W[9] << " " << K[7] + K[8] + K[9];

	return 0;
}