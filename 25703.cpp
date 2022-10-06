#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	cout << "int a;\n";
	cout << "int *ptr = &a;\n";
	for (int i = 2; i <= N; ++i) {
		cout << "int ";
		for (int j = 1; j <= i; ++j) {
			cout << "*";
		}
		if (i != 2) {
			cout << "ptr" << i << " = &ptr" << i - 1 << ";\n";
		}
		else {
			cout << "ptr" << i << " = &ptr;\n";
		}
	}

	return 0;
}