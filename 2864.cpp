#include <iostream>
#include <string>

using namespace std;

int A, B;

int MAXSUM(void)
{
	int copy = A;
	int MAXA = 0, MAXB = 0;
	int multiplier = 1;
	while (copy != 0) {
		int tmp = copy % 10;
		if (tmp == 5)
			tmp = 6;
		MAXA += tmp * multiplier;
		multiplier *= 10;
		copy /= 10;
	}
	copy = B;
	multiplier = 1;
	while (copy != 0) {
		int tmp = copy % 10;
		if (tmp == 5)
			tmp = 6;
		MAXB += tmp * multiplier;
		multiplier *= 10;
		copy /= 10;
	}

	return MAXA + MAXB;
}

int MINSUM(void)
{
	int copy = A;
	int MINA = 0, MINB = 0;
	int multiplier = 1;
	while (copy != 0) {
		int tmp = copy % 10;
		if (tmp == 6)
			tmp = 5;
		MINA += tmp * multiplier;
		multiplier *= 10;
		copy /= 10;
	}
	copy = B;
	multiplier = 1;
	while (copy != 0) {
		int tmp = copy % 10;
		if (tmp == 6)
			tmp = 5;
		MINB += tmp * multiplier;
		multiplier *= 10;
		copy /= 10;
	}

	return MINA + MINB;
}

int main(void)
{
	cin >> A >> B;
	cout << MINSUM() << " " << MAXSUM();
	return 0;
}