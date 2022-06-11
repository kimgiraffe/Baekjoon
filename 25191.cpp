#include <iostream>

using namespace std;

int main(void)
{
	int N, A, B;
	cin >> N >> A >> B;
	if (N >= (A / 2) + B) {
		cout << (A / 2) + B;
	}
	else {
		cout << N;
	}

	return 0;
}