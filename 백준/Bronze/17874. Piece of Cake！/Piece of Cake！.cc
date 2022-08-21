#include <iostream>

using namespace std;

int main(void)
{
	int n, h, v;
	cin >> n >> h >> v;

	if (n > h * 2) {
		h = n - h;
	}
	if (n > v * 2) {
		v = n - v;
	}
	cout << h * v * 4;

	return 0;
}