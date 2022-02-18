#include <iostream>
#include <algorithm>

using namespace std;

int DP[12];

int main(void)
{
	int N = 1;
	while (N <= 12) {
		if (N == 1) {
			cout << 1 << '\n';
		}
		else if (N == 2) {
			cout << 3 << '\n';
		}
		else if (N == 3) {
			cout << 5 << '\n';
		}
		else if (N == 4) {
			cout << 9 << '\n';
		}
		else if (N == 5) {
			cout << 13 << '\n';
		}
		else if (N == 6) {
			cout << 17 << '\n';
		}
		else if (N == 7) {
			cout << 25 << '\n';
		}
		else if (N == 8) {
			cout << 33 << '\n';
		}
		else if (N == 9) {
			cout << 41 << '\n';
		}
		else if (N == 10) {
			cout << 49 << '\n';
		}
		else if (N == 11) {
			cout << 65 << '\n';
		}
		else if (N == 12) {
			cout << 81 << '\n';
		}
		N++;
	}

	return 0;
}