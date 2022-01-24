#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N, sum = 0;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		int size = str.size();
		bool flag = true;

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < i; j++) {
				if (str[i] != str[i - 1] && str[i] == str[j]) {
					flag = false;
					break;
				}
			}
		}
		if (flag) sum++;
	}
	
	cout << sum;

	return 0;
}