#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		int len = str.length();
		if (len >= 6 && len <= 9) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
	return 0;
}