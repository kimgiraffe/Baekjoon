#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	string S;
	cin >> S;
	int zero = 0, one = 0;

	if (S[0] == '0')
		zero++;
	else
		one++;

	for (int i = 1; i < S.size(); i++) {
		if (S[i] != S[i - 1]) {
			if (S[i] == '0')
				zero++;
			else
				one++;
		}
	}
	cout << min(zero, one);
	return 0;
}