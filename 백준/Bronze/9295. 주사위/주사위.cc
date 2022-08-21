#include <iostream>

using namespace std;

int main(void)
{
	int T, A, B, n = 1;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		cout << "Case " << n << ": " << A + B << '\n';
		n++;
	}
	return 0;
}