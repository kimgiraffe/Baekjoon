#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N, cnt = 0;
	cin >> N;
	string str;
	cin >> str;
	for (int i = N - 1; i >= 0; i--) {
		if (str[i] - '0') {
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}