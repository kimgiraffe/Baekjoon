#include <iostream>
#include <cmath>

using namespace std;

long long pow2[31];

int main(void)
{
	int cnt = 0;
	for (int i = 0; i < 31; i++) {
		pow2[i] = pow(2, i);
	}
	long long N;
	cin >> N;
	for (int i = 0; i < 31; i++) {
		if (pow2[i] == N)
			cnt++;
	}
	if (cnt != 0) {
		cout << "1";
	}
	else {
		cout << "0";
	}
	return 0;
}