#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N;
double x, y;
int parent[101];
vector<pair<double, double>> star;
vector<pair<double, pair<int, int>>> v;
double ans = 0;

int find(int u) {
	if (u == parent[u])
		return u;
	return parent[u] = find(parent[u]);
}


double cal(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		star.push_back(make_pair(x, y));
	}

	for (int i = 0; i < star.size(); i++) {
		for (int j = i + 1; j < star.size(); j++) {
			double c = cal(star[i].first, star[i].second, star[j].first, star[j].second);
			v.push_back(make_pair(c, make_pair(i, j)));
		}
	}
	for (int i = 0; i < N; i++) {
		parent[i] = i;
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		int x = v[i].second.first;
		int y = v[i].second.second;
		double c = v[i].first;

		int A = find(x);
		int B = find(y);

		if (A != B) {
			parent[A] = B;
			ans += c;
		}
	}

	cout.precision(3);
	cout << ans;


	return 0;
}