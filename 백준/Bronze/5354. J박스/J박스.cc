#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		if (n == 1) {
			cout << "#";	
		}
		else if (n == 2) {
			cout << "##\n##";
		}
		else {
			for (int i = 1; i <= n; ++i) {
				cout << "#";
			}
			cout << '\n';
			for (int i = 2; i < n; ++i) {
				cout << "#";
				for (int j = 2; j < n; ++j) {
					cout << "J";
				}
				cout << "#";
				cout << '\n';
			}
			for (int i = 1; i <= n; ++i) {
				cout << "#";
			}
		}
		cout << "\n\n";

	}

	return 0;
}