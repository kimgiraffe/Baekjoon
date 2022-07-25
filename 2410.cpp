#include <iostream>

using namespace std;

int dp[1000000];

int f(int num)
{
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= num; i++) {
		if (i % 2 != 0) {
			dp[i] = (dp[i - 1]) % 1000000000;
		}
		else {
			dp[i] = (dp[i-1] + dp[i/2]) % 1000000000;
		}
	}
	return dp[num];
}

int main(void)
{
	int N;
	cin >> N;
	cout << f(N);


	return 0;
}