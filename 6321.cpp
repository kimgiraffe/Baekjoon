#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; ++i) {
		string str;
		cin >> str;
		int len = str.length();
		for (int j = 0; j < len; ++j) {
			if (str[j] == 'Z') str[j] = 'A';
			else str[j] += 1;
		}
		cout << "String #" << i << '\n';
		cout << str << '\n' << '\n';
	}

	return 0;
}