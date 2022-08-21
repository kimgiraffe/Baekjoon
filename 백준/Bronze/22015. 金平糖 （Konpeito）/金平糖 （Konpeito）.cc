#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a[3];
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	sort(a, a + 3);

	cout << a[2] + a[2] - a[0] - a[1];
	return 0;
}