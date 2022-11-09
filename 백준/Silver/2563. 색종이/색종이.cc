#include <iostream>

using namespace std;

int coord[101][101] = { 0, };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int w = 10, h = 10;
	int N, cnt = 0;
	cin >> N;
	while (N--) {
		int x, y;
		cin >> x >> y;
		for (int i = x; i < x + w; ++i) {
			for (int j = y; j < y + h; ++j) {
				if (coord[i][j] == 0)
					coord[i][j] = 1;
			}
		}

	}
	for (int i = 1; i < 101; ++i) {
		for (int j = 1; j < 101; ++j) {
			if (coord[i][j] == 1) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}