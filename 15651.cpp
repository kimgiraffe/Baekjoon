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

void DFS(int idx)
{
	if (idx == M) {
		Print();
		return;
	}

	for (int i = 1; i <= N; i++) {
		arr[idx] = i;
		DFS(idx + 1);
	}
}

int main(void)
{
	cin >> N >> M;

	DFS(0);

	return 0;
}