#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<int, vector<int>, greater<int>> q;
	int N, x;
	cin >> N;
	while (N--) {
		cin >> x;
		if (x == 0 && q.empty()) {
			cout << 0 << '\n';
		}
		else if (x == 0	) {
			cout << q.top() << '\n';
			q.pop();
		}
		else {
			q.push(x);
		}
	}

	return 0;
}