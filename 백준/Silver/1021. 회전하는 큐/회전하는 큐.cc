#include <iostream>
#include <deque>

using namespace std;

int N, M, x, p;
int ans = 0;
deque <int> dq;
int find_num[51] = {};

int main(void)
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	for (int i = 0; i < M; i++) {
		cin >> x;
		find_num[i] = x;
	}

	for (int i = 0; i < M; i++) {
		if (dq.size() == 1) continue;

		for (int j = 0; j < N; j++) {
			if (find_num[i] == dq.at(j)) {
				p = j;
				break;
			}
		}

		if (p <= dq.size() / 2) {
			for (int j = 0; j < p; j++) {
				dq.push_back(dq.front());
				dq.pop_front();
				ans++;
			}
			dq.pop_front();
		}
		else {
			for (int j = 0; j < dq.size() - p; j++) {
				dq.push_front(dq.back());
				dq.pop_back();
				ans++;
			}
			dq.pop_front();
		}
	}

	cout << ans;

	return 0;
}