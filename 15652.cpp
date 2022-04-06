#include <iostream>
#include <algorithm>

using namespace std;

int arr[8] = {};
int N, M, cnt = 0;

void Print() {
	for (int i = 0; i < M; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';
}

void DFS(int cnt, int idx)
{
	if (cnt == M) {
		Print();
		return;
	}

	for (int i = idx; i <= N; i++) {
		arr[cnt] = i;
		DFS(cnt + 1, i);
	}
}

int main(void)
{
	cin >> N >> M;

	DFS(0, 1);

	return 0;
}