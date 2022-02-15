#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	int A, B;
	while (true) {
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;

	A > B ? cout << "Yes" << '\n': cout << "No" << '\n';
	}

	return 0;
}