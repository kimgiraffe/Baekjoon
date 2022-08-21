#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int parent[100001];

struct edge {
	int u, v, w;

	edge(int u, int v, int w) {
		this->u = u;
		this->v = v;
		this->w = w;
	}
};

int find(int u) {
	if (u == parent[u])
		return u;
	return parent[u] = find(parent[u]);
}

void merge(int u, int v) {
	u = find(u);
	v = find(v);

	parent[v] = u;
}

int compare_comp(const edge & a, const edge & b) {
	return a.w < b.w;
}

int main(void)
{
	long long ans = 0;
	vector<edge> v;
	int N, M;
	cin >> N >> M;
	int A, B, C;
	for (int i = 1; i <= N; i++) {
		parent[i] = i;
	}
	for (int i = 0; i < M; i++) {
		cin >> A >> B >> C;
		v.push_back(edge(A, B, C));
	}

	sort(v.begin(), v.end(), compare_comp);

	int max_c = 0;
	for (auto n : v) {
		if (find(n.v) != find(n.u)) {
			max_c = max(max_c, n.w);
			merge(n.u, n.v);
			ans += n.w;
		}
	}
	

	cout << ans - max_c;
	return 0;
}