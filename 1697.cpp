#include <iostream>
#include <queue>

#define MAX_VERTEX 100001

using namespace std;

int N, K;
bool visit[MAX_VERTEX];

int bfs(int n, int k)
{
	int t = 0;
	queue<int> q;
	q.push(n);

	while (1) {
		int size = q.size();

		for (int i = 0; i < size; i++) {
			n = q.front();
			q.pop();
			if (n == k)
				return t;
			if (n > 0 && visit[n - 1] == 0) {
				q.push(n - 1);
				visit[n - 1] = 1;
			}
			if (n < 100000 && visit[n + 1] == 0) {
				q.push(n + 1);
				visit[n + 1] = 1;
			}
			if (n * 2 <= 100000 && visit[n * 2] == 0) {
				q.push(n * 2);
				visit[n * 2] = 1;
			}
		}
		t++;
	}
}

int main(void)
{
	cin >> N >> K;
	cout << bfs(N, K);

	return 0;
}