#include <iostream>

using namespace std;

int main(void)
{
	int n, num;
	cin >> n;

	while (true) {
		cin >> num;
		if (num == 0) {
			break;
		}
		else {
			if (num%n == 0) {
				cout << num << " is a multiple of " << n << ".\n";
			}
			else {
				cout << num << " is NOT a multiple of " << n << ".\n";
			}
		}
	}

	return 0;
}