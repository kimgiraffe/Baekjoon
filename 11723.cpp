#include <iostream>
#include <string>

using namespace std;

string input;
int n, BIT;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M;
	cin >> M;
	while (M--) {
		cin >> input;
		if (input == "add") {
			cin >> n;
			BIT |= (1 << n);
		}
		else if (input == "remove") {
			cin >> n;
			BIT &= ~(1 << n);
		}
		else if (input == "check") {
			cin >> n;
			if (BIT & (1 << n)) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (input == "toggle") {
			cin >> n;
			BIT ^= (1 << n);
		}
		else if (input == "all") {
			BIT = (1 << 21) - 1;
		}
		else if (input == "empty") {
			BIT = 0;
		}
	}

	return 0;
}