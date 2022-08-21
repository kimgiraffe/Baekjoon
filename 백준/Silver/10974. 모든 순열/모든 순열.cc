#include <iostream>
#include <algorithm>

using namespace std;

int arr[8];
bool visit[8] = { false, };
int N;

void Print() {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';
}

void dfs(int idx)
{
	if (idx == N) {
		Print();
		return;
	}

	for (int i = 0; i < N; i++) {
		if (visit[i]) continue;
		visit[i] = true;
		arr[idx] = i+1;
		dfs(idx+1);
		visit[i] = false;
	}
}

int main(void)
{
	cin >> N;
	dfs(0);

	return 0;
}