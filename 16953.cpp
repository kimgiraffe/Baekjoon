#include <iostream>

using namespace std;

int A, B, cnt = 0;

void Solve(int a, int b)
{
	while (true) {
		if (a > b) {
			cout << -1;
			break;
		}
		if (a == b) {
			cnt++;
			cout << cnt;
			break;
		}

		if (b % 10 == 1) {
			b--;
			b /= 10;
		}
		else if (b % 2 == 0) {
			b /= 2;
		}
		else {
			cout << -1;
			break;
		}

		cnt++;
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> A >> B;
	Solve(A, B);

	return 0;
}