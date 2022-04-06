#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[8] = {};
vector<int> v;
bool visit[8] = {};
int N, M;

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

	for (int i = 0; i < v.size(); i++) {
		if (visit[i]) continue;
		visit[i] = true;
		arr[idx] = v[i];
		DFS(idx + 1);
		visit[i] = false;
	}
}

int main(void)
{
	cin >> N >> M;

	v.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	DFS(0);

	return 0;
}