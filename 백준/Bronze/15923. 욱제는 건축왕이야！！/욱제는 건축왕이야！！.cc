#include <iostream>
#include <cmath>

using namespace std;

struct Point {
	int x, y;
};

Point p[21];

int d(int n)
{
	int ret = 0;
	for (int i = 0; i < n - 1; ++i) {
		ret += sqrt((p[i].x - p[i + 1].x)*(p[i].x - p[i + 1].x) + (p[i].y - p[i + 1].y)*(p[i].y - p[i + 1].y));
	}
	ret += sqrt((p[0].x - p[n - 1].x)*(p[0].x - p[n - 1].x) + (p[0].y - p[n - 1].y)*(p[0].y - p[n - 1].y));

	return ret;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> p[i].x >> p[i].y;
	}

	cout << d(N);

	return 0;
}