#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int R, C;
	cin >> R >> C;

	for (int i = 1; i <= R; ++i) {
		for (int j = 1; j <= C; ++j) {
			cout << "*";
		}
		cout << '\n';
	}

	return 0;
}