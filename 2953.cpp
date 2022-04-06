#include <iostream>
#include <algorithm>

using namespace std;

int s[5][4];
int sum[5];

int main(void)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> s[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			sum[i] += s[i][j];
		}
	}
	int MAX = sum[0];
	int tmp = 0;
	for (int i = 1; i < 5; i++) {
		if (sum[i] > MAX) {
			MAX = sum[i];
			tmp = i;
		}
	}
	cout << tmp+1 << " " << MAX;
	return 0;
}