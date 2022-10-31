#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, e;
	cin >> a >> e;

	bool T = true, V = true, G = true;
	if (a < 3 || e > 4) {
		T = false;
	}
	if (a > 6 || e < 2) {
		V = false;
	}
	if (a > 2 || e > 3) {
		G = false;
	}

	if (T) {
		cout << "TroyMartian\n";
	}
	if (V) {
		cout << "VladSaturnian\n";
	}
	if (G) {
		cout << "GraemeMercurian\n";
	}

	return 0;
}