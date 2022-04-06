#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int indegree[32001];
vector<int> v[32001];

int main(void)
{
	int N, M, A, B;
	cin >> N >> M;
	while (M--) {
		cin >> A >> B;
		indegree[B]++;
		v[A].push_back(B);
	}

	queue<int> now;
	for (int i = 1; i <= N; i++)
		if (indegree[i] == 0) now.push(i);

	while (!now.empty()) {
		int i = now.front(); now.pop();
		cout << i << " ";

		for (int j = 0; j < v[i].size(); j++) {
			if (--indegree[v[i][j]] == 0)
				now.push(v[i][j]);
		}
		
	}

	return 0;
}