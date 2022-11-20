#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int k;
		cin >> k;
		multiset<int> dq;
		for (int i = 0; i < k; ++i) {
			char ch;
			int n;
			cin >> ch >> n;

			if (ch == 'I') {
				dq.insert(n);
			}
			else if (ch == 'D') {
				if (dq.empty()) {
					continue;
				}
				else if (n == 1) {
					auto iter = dq.end();
					iter--;
					dq.erase(iter);
				}
				else if (n == -1) {
					dq.erase(dq.begin());
				}
			}
		}
		if (dq.empty()) {
			cout << "EMPTY\n";
		}
		else {
			auto iter = dq.end();
			iter--;
			cout << *iter << ' ' << *dq.begin() << '\n';
		}
	}

	return 0;
}