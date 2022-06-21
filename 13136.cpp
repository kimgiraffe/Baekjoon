#include <iostream>

using namespace std;

int main(void)
{
	long long int R, C, N;
	cin >> R >> C >> N;
	if (R%N != 0) {
		R = R + (N-R%N);
	}
	if (C%N != 0) {
		C = C + (N-C%N);
	}
	cout << (R / N)*(C / N);

	return 0;
}