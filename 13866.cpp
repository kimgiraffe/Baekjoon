#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << abs(A + D - B - C);
	return 0;
}