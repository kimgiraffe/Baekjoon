#include <iostream>
#include <algorithm>

using namespace std;

int dir[6] = {};
int len[6] = {};
int sum = 0, MAX = 0;
int mul[6] = {};

int main(void)
{
	int K;
	cin >> K;
	for (int i = 0; i < 6; i++) {
		cin >> dir[i] >> len[i];
	}

	for (int i = 1; i < 6; i++) {
		mul[i] = len[i] * len[i - 1];
	}
	mul[0] = len[0] * len[5];

	for (int i = 0; i < 6; i++) {
		sum += mul[i];
		MAX = max(mul[i], MAX);
	}
	
	cout << (MAX - ((MAX * 3) - sum))*K;

	return 0;
}