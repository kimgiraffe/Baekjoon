#include <iostream>

using namespace std;

int main(void)
{
	int A, B, C, cnt = 0;
	cin >> A >> B >> C;
	if (A == 1) {
		cnt++;
	}
	if (B == 1) {
		cnt++;
	}
	if (C == 1) {
		cnt++;
	}
	if (cnt > 1) {
		cout << 1;
	}
	else {
		cout << 2;
	}
	return 0;
}