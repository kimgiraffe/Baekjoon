#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> a;
	int num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		a.push_back(num);
	}

	vector<int> v;
	for (int i = 0; i < n; i++) {
		num = a[i];
		int idx = lower_bound(v.begin(), v.end(), num) - v.begin();
		if (idx >= v.size() || v.size() == 0) {
			v.push_back(num);
		}
		else {
			v[idx] = num;
		}
	}

	cout << v.size();

	return 0;
}