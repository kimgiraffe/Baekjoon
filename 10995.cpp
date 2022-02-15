#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0) {
			cout << " ";
		}
		for (int j = 0; j < N; j++) {
			cout << "* ";
		}
		cout << '\n';
	}

	return 0;
}