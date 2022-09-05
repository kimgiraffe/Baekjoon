#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int N;
int A[101];
int op[4];
int MAX = INT_MIN;
int MIN = INT_MAX;

void solve(int depth, int val)
{
	if (depth == N) {
		MAX = max(MAX, val);
		MIN = min(MIN, val);
	}

	for (int i = 0; i < 4; ++i) {
		if (op[i] != 0) {
			op[i]--;

			if (i == 0) {
				solve(depth + 1, val + A[depth]);
			}
			else if (i == 1) {
				solve(depth + 1, val - A[depth]);
			}
			else if (i == 2) {
				solve(depth + 1, val*A[depth]);
			}
			else if (i == 3) {
				solve(depth + 1, val / A[depth]);
			}
			op[i]++;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}

	for (int i = 0; i < 4; ++i) {
		cin >> op[i];
	}
	solve(1, A[0]);
	cout << MAX << '\n' << MIN;
	return 0;
}