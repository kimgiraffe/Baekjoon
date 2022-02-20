#include <iostream>

using namespace std;

int main(void)
{
	int S1[4], S2[4];
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 4; i++) {
		cin >> S1[i];
		sum1 += S1[i];
	}

	for (int i = 0; i < 4; i++) {
		cin >> S2[i];
		sum2 += S2[i];
	}

	sum1 >= sum2 ? cout << sum1 : cout << sum2;

	return 0;
}