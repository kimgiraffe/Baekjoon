#include <iostream>

using namespace std;

int main(void)
{
	int T, c, v;
	cin >> T;
	while (T--) {
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n";
	}

	return 0;
}