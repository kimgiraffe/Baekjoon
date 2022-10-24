#include <iostream>

using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		char p1, p2;
		int n1 = 0, n2 = 0;
		while (n--) {
			cin >> p1 >> p2;
			if (p1 == 'R') {
				if (p2 == 'S') {
					n1++;
				}
				else if (p2 == 'P') {
					n2++;
				}
			}
			else if (p1 == 'S') {
				if (p2 == 'P') {
					n1++;
				}
				else if (p2 == 'R') {
					n2++;
				}
			}
			else {
				if (p2 == 'R') {
					n1++;
				}
				else if (p2 == 'S') {
					n2++;
				}
			}
		}
		if (n1 > n2) {
			cout << "Player 1\n";
		}
		else if (n1 < n2) {
			cout << "Player 2\n";
		}
		else {
			cout << "TIE\n";
		}
	}

	return 0;
}