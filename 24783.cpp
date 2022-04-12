#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int a, b, c;
	while (N--) {
		cin >> a >> b >> c;
		if (a + b == c) {
			cout << "Possible\n";
		}
		else if (a - b == c || b - a == c) {
			cout << "Possible\n";
		}
		else if (a*b == c) {
			cout << "Possible\n";
		}
		else if (a / b == c && a % b == 0) {
			cout << "Possible\n";
		}
		else if (b / a == c && b % a == 0) {
			cout << "Possible\n";
		}
		else {
			cout << "Impossible\n";
		}
	}

	return 0;
}