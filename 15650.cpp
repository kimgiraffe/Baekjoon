#include <iostream>
#include <algorithm>

using namespace std;

int arr[8] = {};
bool visit[8] = {};
int N, M, cnt = 0;

void Print() {
	for (int i = 0; i < N; i++) {
		if (visit[i]) {
			cout << arr[i] << " ";
		}
	}
	cout << '\n';
}

void DFS(int cnt, int idx)
{
	if (cnt == M) {
		Print();
		return;
	}

	for (int i = idx; i < N; i++) {
		if (visit[i]) continue;
		visit[i] = true;

		DFS(cnt + 1, i + 1);
		visit[i] = false;
	}
}

int main(void)
{
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		arr[i] = i + 1;
		visit[i] = false;
	}

	DFS(0, 0);

	return 0;
}