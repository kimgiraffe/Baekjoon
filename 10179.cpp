#include <iostream>

using namespace std;

int main(void)
{
	int T;
	cin >> T;
	double p;
	while (T--) {
		cin >> p;
		cout << fixed;
		cout.precision(2);
		cout << "$" << (p * 0.8*100)/100 << '\n';
	}

	return 0;
}