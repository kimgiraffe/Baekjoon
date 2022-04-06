#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int A, B, C, D;
	cin >> A >> B;
	cin >> C >> D;

	cout << min(A + D, B + C);

	return 0;
}