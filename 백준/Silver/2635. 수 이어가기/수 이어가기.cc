#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, MAX = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		vector<int> tmp;
		tmp.push_back(N);
		tmp.push_back(i);

		int j = 0;
		while (1) {
			if (tmp[j] - tmp[j + 1] >= 0) {
				tmp.push_back(tmp[j] - tmp[j + 1]);
				j++;
			}
			else {
				break;
			}
		}
		if (MAX < tmp.size()) {
			v = tmp;
			MAX = tmp.size();
		}
	}

	cout << MAX << "\n";
	for (int i = 0; i < MAX; i++) {
		cout << v[i] << " ";
	}

	return 0;
}