#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	while (n--) {
		int J[10];
		bool Zack = false, Mack = false;
		for (int i = 0; i < 10; ++i) {
			cin >> J[i];
			if (J[i] == 17) {
				Zack = true;
			}
			if (J[i] == 18) {
				Mack = true;
			}
		}
		for (int i = 0; i < 10; ++i) {
			cout << J[i] << ' ';
		}
		cout << '\n';
		if (Zack && Mack) {
			cout << "both\n\n";
		}
		else if (Zack && !Mack) {
			cout << "zack\n\n";
		}
		else if (!Zack && Mack) {
			cout << "mack\n\n";
		}
		else {
			cout << "none\n\n";
		}
	}

	return 0;
}