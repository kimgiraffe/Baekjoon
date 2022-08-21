#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
long long arr[101] = {};

int GCD(int a, int b) {
	if (b == 0)
		return a;
	return GCD(b, a % b);
}

int main(void)
{
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	
	int gcd = arr[1] - arr[0];
	for (int i = 2; i < N; i++) {
		gcd = GCD(gcd, arr[i] - arr[i - 1]);
	}

	vector<int> ans;
	for (int i = 2; i*i <= gcd; i++) {
		if (gcd % i == 0) {
			ans.push_back(i);
			ans.push_back(gcd / i);
		}
	}
	
	ans.push_back(gcd);
	sort(ans.begin(), ans.end());

	ans.erase(unique(ans.begin(), ans.end()), ans.end());

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	return 0;
}