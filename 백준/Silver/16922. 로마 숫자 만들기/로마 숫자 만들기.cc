#include <iostream>
#include <set>

using namespace std;

set<int> s;

int num[4] = { 1,5,10,50 };

void backtracking(int depth, int n, int idx, int res) {
	if (depth == n) {
		s.insert(res);
		return;
	}

	for (int i = idx; i < 4; i++) {
		backtracking(depth, n + 1, i, res + num[i]);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	backtracking(N, 0, 0, 0);
	cout << s.size();
	

	return 0;
}