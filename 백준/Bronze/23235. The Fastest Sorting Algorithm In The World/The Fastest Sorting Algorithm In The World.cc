#include <iostream>

using namespace std;

int main(void)
{
	int n, idx = 1;
	while (true) {
		cin >> n;
		if (n == 0) break;
		for (int i = 1; i <= n; i++) {
			int tmp;
			cin >> tmp;
		}
		cout << "Case " << idx << ": Sorting... done!\n";
		idx++;
	}

	return 0;
}