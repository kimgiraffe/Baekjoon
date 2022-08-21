#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	while (N--) {
		string str;
		int a, b, c;
		cin >> str >> a >> b >> c;
		if (a + b + c >= 55 && a >= 10.5 && b >= 7.5 && c >= 12) {
			cout << str << " " << a + b + c << " PASS\n";
		}
		else {
			cout << str << " " << a + b + c << " FAIL\n";
		}
	}

	return 0;
}