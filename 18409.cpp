#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N, cnt = 0;
	cin >> N;
	string str;
	cin >> str;
	for (int i = 0; i < N; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}