#include <iostream>

using namespace std;

void day(int D)
{
	if (D % 7 == 1)
		cout << "Thursday";
	else if (D % 7 == 2)
		cout << "Friday";
	else if (D % 7 == 3)
		cout << "Saturday";
	else if (D % 7 == 4)
		cout << "Sunday";
	else if (D % 7 == 5)
		cout << "Monday";
	else if (D % 7 == 6)
		cout << "Tuesday";
	else
		cout << "Wednesday";
}

int main()
{
	int D, M;
	cin >> D >> M;

	if (M == 1) {
		day(D);
	}
	else if (M == 2) {
		D += 31;
		day(D);
	}
	else if (M == 3) {
		D += 31 + 28;
		day(D);
	}
	else if (M == 4) {
		D += 31 + 28 + 31;
		day(D);
	}
	else if (M == 5) {
		D += 31 + 28 + 31 + 30;
		day(D);
	}
	else if (M == 6) {
		D += 31 + 28 + 31 + 30 + 31;
		day(D);
	}
	else if (M == 7) {
		D += 31 + 28 + 31 + 30 + 31 + 30;
		day(D);
	}
	else if (M == 8) {
		D += 31 + 28 + 31 + 30 + 31 + 30 + 31;
		day(D);
	}
	else if (M == 9) {
		D += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
		day(D);
	}
	else if (M == 10) {
		D += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
		day(D);
	}
	else if (M == 11) {
		D += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
		day(D);
	}
	else if (M == 12) {
		D += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
		day(D);
	}

	return 0;
}