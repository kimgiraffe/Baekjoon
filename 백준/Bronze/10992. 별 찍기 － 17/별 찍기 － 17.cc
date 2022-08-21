#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, i, j;
	cin >> N;
	for (i = 1; i <= N; i++) {
		for (j = i; j < N; j++) {
			cout << " ";
		}

		if (i == N) {
			for (j = 1; j <= 2 * N - 1; j++) {
				cout << "*";
			}
		}
		else {
			for (j = 1; j <= 2 * i - 1; j++) {
				if (j > 1 && j < 2 * i - 1)
					cout << " ";
				else
					cout << "*";
			}
		}
		cout << '\n';
	}

	return 0;
}