#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;

		queue<pair<int, int>> q;
		priority_queue<int> MaxI;

		int printCount = 0;
		for (int i = 0; i < N; i++) {
			int v;
			cin >> v;

			q.push(make_pair(i, v));
			MaxI.push(v);
		}

		while (!q.empty()) {
			int index = q.front().first;
			int importance = q.front().second;

			if (MaxI.top() > importance) {
				q.push(q.front());
				q.pop();
			}
			else {
				q.pop();
				MaxI.pop();
				printCount++;

				if (index == M) {
					cout << printCount << "\n";
					break;
				}
			}
		}
	}

	return 0;
}