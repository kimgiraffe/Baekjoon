#include <iostream>

using namespace std;

int main(void)
{
	int A, B, C, M;

	cin >> A >> B >> C >> M;

	int f = 0, w= 0;
	for (int i = 1; i < 25; i++) {
		if (f + A <= M) {
			f += A;
			w += B;
		}
		else {
			f -= C;
			if (f < 0)
				f = 0;
		}
	}
	cout << w;

	return 0;
}