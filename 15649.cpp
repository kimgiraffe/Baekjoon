#include <iostream>
#include <algorithm>

using namespace std;

int arr[8] = {};
bool visit[8] = {};
int N, M, cnt = 0;

void Print() {
	for (int i = 0; i < M; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';
}

void DFS(int cnt)
{
	if (cnt == M) {
		Print();
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (visit[i]) continue;
		visit[i] = true;
		arr[cnt] = i;
		DFS(cnt + 1);
		visit[i] = false;
	}
}

int main(void)
{
	cin >> N >> M;

	DFS(0);

	return 0;
}