#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N, M, a, b;
	int pack = 1000, sol = 1000;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		if (a < pack)
			pack = a;
		if (b < sol)
			sol = b;
	}
	a = N / 6;
	b = N % 6;

	if (b*sol >= pack) {
		cout << pack * a + pack;
	}
	else if (sol * 6 < pack) {
		cout << N * sol;
	}
	else {
		cout << pack * a + sol * b;
	}

	return 0;
}