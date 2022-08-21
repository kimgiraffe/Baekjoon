#include <iostream>

using namespace std;

int main(void)
{
	int S, M, L;
	cin >> S >> M >> L;
	if (S + 2 * M + 3 * L < 10) {
		cout << "sad\n";
	}
	else{
		cout << "happy\n";
	}

	return 0;
}