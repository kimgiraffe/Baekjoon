#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int d[5];
	int T, i = 0;
	cin >> T;
	while (T > 0) {
		d[i] = T % 9;
		T /= 9;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << d[j];
	}
	return 0;
}