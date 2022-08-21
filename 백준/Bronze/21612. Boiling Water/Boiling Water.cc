#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int B;
	cin >> B;
	int P = 5 * B - 400;
	cout << P << '\n';
	if (P > 100) {
		cout << "-1";
	}
	else if (P < 100) {
		cout << "1";
	}
	else {
		cout << "0";
	}

	return 0;
}