#include <iostream>

using namespace std;

int main(void)
{
	int N, A, Y = 0, M = 0;
	cin >> N;
	while (N--) {
		cin >> A;
		Y += (A / 30 + 1) *10;
		M += (A / 60 + 1) * 15;
	}
	if (Y > M) {
		cout << "M " << M;
	}
	else if (Y < M) {
		cout << "Y " << Y;
	}
	else {
		cout << "Y M " << Y;
	}

	return 0;
}