#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int N;
vector<pair<int, int>> v;

bool compare(pair<int, int> x, pair<int, int> y) {
	if (x.first == y.first) {
		return x.second < y.second;
	}
	return x.first < y.first;
}

struct cmp_pq {
	bool operator()(pair<int, int>x, pair<int, int> y) {
		return x.second > y.second;
	}
};

priority_queue<pair<int, int>, vector<pair<int, int>>, cmp_pq> pq;

int solve()
{
	for (int i = 1; i < v.size(); i++) {
		if (v[i].first >= pq.top().second) {
			pq.pop();
			pq.push(v[i]);
		}
		else {
			pq.push(v[i]);
		}
	}

	return pq.size();
}

int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x, y });
	}
	sort(v.begin(), v.end(), compare);
	pq.push(v[0]);
	cout << solve();

	return 0;
}