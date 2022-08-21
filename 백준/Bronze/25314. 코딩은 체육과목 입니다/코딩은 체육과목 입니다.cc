#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	for (int i = 1; i <= N / 4; i++) {
		cout << "long ";
	}
	cout << "int\n";

	return 0;
}