#include <iostream>

using namespace std;

int main(void)
{
	int T;
	cin >> T;
	while (T--) {
		int V, E;
		cin >> V >> E;
		cout << 2 - V + E << '\n';
	}

	return 0;
}