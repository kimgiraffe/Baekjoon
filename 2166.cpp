#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int x, y;
double ans;
vector<pair<double, double>> v;

double PRODUCT(int v1, int v2, int v3)
{
	double x1 = v[v1].first;
	double x2 = v[v2].first;
	double x3 = v[v3].first;
	double y1 = v[v1].second;
	double y2 = v[v2].second;
	double y3 = v[v3].second;

	double tmp1 = x1 * y2 + x2 * y3 + x3 * y1;
	double tmp2 = x2 * y1 + x3 * y2 + x1 * y3;

	return (tmp1 - tmp2) / 2;
}

int main(void)
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ x, y });
	}
	
	for (int i = 1; i < N - 1; i++) {
		ans += PRODUCT(0, i, i + 1);
	}

	cout.precision(1);
	cout << fixed;
	cout << abs(ans) << '\n';

	return 0;
}