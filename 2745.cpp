#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
	long long ans = 0;
	string N;
	int B;
	cin >> N >> B;
	int len = N.size();
	for (int i = 0; i < len; i++) {
		int tmp = N[len - i - 1];
		if (tmp >= 'A' && tmp <= 'Z')
			tmp = tmp - 'A' + 10;
		else
			tmp = tmp - '0';

		ans += (tmp *(int)pow(B, i));
	}
	
	cout << ans;
	

	return 0;
}