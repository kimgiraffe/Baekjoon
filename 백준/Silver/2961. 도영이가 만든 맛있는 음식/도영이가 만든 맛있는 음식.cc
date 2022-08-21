#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<pair<int, int>> v;

void subset(int n) {
	int min = 987654321;
	for (int i = 1; i < (1 << n); i++) {
		int S = 1, B = 0;
		for (int j = 0; j < n; j++) {
			if (i&(1 << j)) {
				S *= v[j].first;
				B += v[j].second;
			}
		}
		if (min > abs(S - B))
			min = abs(S - B);
	}
	cout << min;
}

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	subset(N);
	return 0;
}