#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string str1, str2;
int dp[1001][1001], i, j;

void print(int i, int j) {
	if (dp[i][j] == 0)
		return;
	if (str1[i - 1] == str2[j - 1]) {
		print(i - 1, j - 1);
		cout << str1[i - 1];
	}
	else {
		dp[i - 1][j] > dp[i][j - 1] ? print(i - 1, j) : print(i, j - 1);
	}
}

int main(void)
{

	cin >> str1 >> str2;

	for (i = 0; str1[i]; i++) {
		for (j = 0; str2[j]; j++) {
			if (str1[i] == str2[j])
				dp[i + 1][j + 1] = dp[i][j] + 1;
			else
				dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
		}
	}

	cout << dp[i][j] << '\n';
	print(i, j);

	return 0;
}