#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int TC;
	cin >> TC;
	for (int i = 1; i <= TC; i++) {
		long long n;
		cin >> n;
		if (n >= 0 && n <= 2) {
			cout << 2 << "\n";
		}
		else if (n == 3) {
			cout << 3 << "\n";
		}
		else {
			while (!isPrime(n)) n++;
			cout << n << "\n";
		}
	}

	return 0;
}