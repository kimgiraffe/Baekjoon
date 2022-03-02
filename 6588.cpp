#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check[1000001];
vector<int> prime;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i = 0; i < 1000001; i++) check[i] = true;
	for (int i = 2; i*i <= 1000000; i++) {
		if (check[i] == true)
			for (int j = i + i; j <= 1000000; j += i)
				check[j] = false;
	}
	for (int i = 2; i <= 1000000; i++) {
		if (check[i] == true)
			prime.push_back(i);
	}

	while (true) {
		int n;
		cin >> n;
		if (n == 0) break;

		for (int i = 1; prime[i] < n; i++) {
			int n2 = n - prime[i];
			if (check[n2]) {
				cout << n << " = " << prime[i] << " + " << n2 << '\n';
				break;
			}
		}
	}

	return 0;
}