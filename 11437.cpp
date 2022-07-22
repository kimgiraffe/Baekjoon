	#define _CRT_SECURE_NO_WARNINGS
	#include <algorithm>
	#include <cstdio>
	#include <vector>
	#include <iostream>
	#include <cstring>

	using namespace std;

	int n;
	vector<int> v[100001]; // 도착지, 경로 번호

	int depth[100001];
	int parent[100001][20];
	int _size[100001];
	int dfs(int node, int p) {
		_size[node] = 1;
		parent[node][0] = p;
		depth[node] = depth[p] + 1;
		for (auto nxt : v[node]) {
			if (nxt != p) {
				_size[node] += dfs(nxt, node);
			}
		}
		return _size[node];
	}
	int LCA(int a, int b) {
		int da = depth[a];
		int db = depth[b];
		if (da < db) {
			swap(a, b);
		}
		da = depth[a];
		db = depth[b];
		int dif = da - db;
		for (int i = 19; i > -1; i--) {
			if (dif & (1 << i)) {
				a = parent[a][i];
			}
		}
		if (a != b) {
			for (int i = 19; i > -1; i--) {
				if (parent[a][i] != -1 && parent[a][i] != parent[b][i]) {
					a = parent[a][i];
					b = parent[b][i];
				}
			}
			a = parent[a][0];
			b = parent[b][0];
		}
		return a;
	}
	int main() {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL), cout.tie(NULL);
		// freopen("input.txt", "r", stdin);
		cin >> n;
		for (int i = 1; i < n; i++) {
			int a, b;
			cin >> a >> b;
			v[a].emplace_back(b);
			v[b].emplace_back(a);
		}
		memset(parent, -1, sizeof(parent));
		depth[0] = 1;
		dfs(1, 0);


		for (int i = 1; i < 20; i++) {
			for (int j = 1; j <= n; j++) {
				parent[j][i] = parent[parent[j][i - 1]][i - 1];
			}
		}
		int m;
		cin >> m;
		for (; m--;) {
			int a, b;
			cin >> a >> b;
			cout << LCA(a, b) << "\n";
		}
	}