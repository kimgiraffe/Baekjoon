#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;

	if (C < P) {
		B += (P - C)*D;
	}
	cout << min(B, A*P);
	return 0;
}