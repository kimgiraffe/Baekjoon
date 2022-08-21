#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int dp[1001][1001], i, j;	

int main(void)
{
	string s1, s2;
	cin >> s1 >> s2;
	s1 = "0" + s1;
	s2 = "0" + s2;
	for (i = 1; s1[i]; i++) {
		for (j = 1; s2[j]; j++) {
			dp[i][j] = max({ dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] + (s1[i] == s2[j]) });
		}
	}

	cout << dp[i - 1][j - 1];

	return 0;
}