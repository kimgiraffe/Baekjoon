#include <iostream>

using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	if (M <= 2) {
		cout << "NEWBIE!\n";
	}
	else if (M > 2 && M <= N) {
		cout << "OLDBIE!\n";
	}
	else {
		cout << "TLE!\n";
	}

	return 0;
}