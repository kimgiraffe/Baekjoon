#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, K;
int T = 987654321, W = 0;
bool visited[100001];
queue<pair<int, int>> q;

int main(void)
{
	cin >> N >> K;

	q.push(make_pair(N, 0));
	while (!q.empty()) {
		int x = q.front().first;
		int n = q.front().second;
		q.pop();

		visited[x] = true;

		if (T < n) break;
		if (x == K) {
			T = n;
			W++;
			continue;
		}

		if (x - 1 >= 0 && !visited[x - 1]) {
			q.push(make_pair(x - 1, n + 1));
		}
		if (x + 1 <= 100000 && !visited[x + 1]) {
			q.push(make_pair(x + 1, n + 1));
		}
		if (x * 2 <= 100000 && !visited[x * 2]) {
			q.push(make_pair(x * 2, n + 1));
		}
	}

	cout << T << '\n' << W;

	return 0;
}