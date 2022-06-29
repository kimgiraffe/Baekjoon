#include <iostream>2

using namespace std;

void primeFactorization(int n)
{
	int primeFact = 2, cnt = 0;
	if (n != 1) {
		while (true) {
			if (n % primeFact == 0) {
				n /= primeFact;
				cnt++;
			}
			else {
				if (cnt != 0) {
					cout << primeFact << " " << cnt << "\n";
					cnt = 0;
				}
				primeFact++;
			}
			if (n == 1) {
				if (cnt != 0) {
					cout << primeFact << " " << cnt << "\n";
					cnt = 0;
				}
				break;
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	while (N--) {
		int x;
		cin >> x;
		primeFactorization(x);
		
	}

	return 0;
}