#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int L, S;
	cin >> L >> S;
	if (S <= L) {
		cout << "Congratulations, you are within the speed limit!";
	}
	else {
		cout << "You are speeding and your fine is $";
		if (S - L >= 1 && S - L <= 20) {
			cout << "100.";
		}
		else if (S - L >= 21 && S - L <= 30) {
			cout << "270.";
		}
		else {
			cout << "500.";
		}
	}

	return 0;
}