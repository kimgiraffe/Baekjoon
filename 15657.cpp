#include <iostream>
#include <algorithm>

using namespace std;

int arr[8] = {};
int visit[8] = {};
int N, M, cnt = 0;

void Print() {
	for (int i = 0; i < M; i++) {
		cout << arr[visit[i]] << " ";
	}
	cout << '\n';
}

void DFS(int idx, int start, int cnt)
{
	if (cnt == M) {
		Print();
		return;
	}

	if (idx == N) {
		return;
	}

	for (int i = start; i < N; i++) {
		visit[idx] = i;
		DFS(idx + 1, i, cnt + 1);
	}
}

int main(void)
{
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	DFS(0, 0, 0);
	return 0;
}