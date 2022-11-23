#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> v;
double sum = 0;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	// freopen("input.txt", "r", stdin);

	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}

	for (int i = 1; i <= n; ++i) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end());

	double k = round(n * 0.15);
	for (int i = k; i < n - k; ++i) {
		sum += v[i];
	}

	cout << round(sum / (n - 2 * k));

	return 0;
}