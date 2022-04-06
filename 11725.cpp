#include <iostream>
#include <vector>

using namespace std;

int N;
bool visit[100001];
int parent[100001];
vector<int> tree[100001];

void FindP(int nodeNum)
{
	visit[nodeNum] = true;

	for (int i = 0; i < tree[nodeNum].size(); i++) {
		int next = tree[nodeNum][i];

		if (!visit[next]) {
			parent[next] = nodeNum;
			FindP(next);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	for (int i = 1; i < N; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		tree[v1].push_back(v2);
		tree[v2].push_back(v1);
	}

	FindP(1);

	for (int i = 2; i <= N; i++)
		cout << parent[i] << '\n';

	return 0;
}