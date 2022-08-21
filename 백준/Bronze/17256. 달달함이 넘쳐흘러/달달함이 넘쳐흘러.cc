#include <iostream>

using namespace std;

struct num {
	int x, y, z;
};

num a, b, c;

int main(void)
{
	cin >> a.x >> a.y >> a.z;
	cin >> c.x >> c.y >> c.z;
	b.x = c.x - a.z;
	b.y = c.y / a.y;
	b.z = c.z - a.x;
	cout << b.x << " " << b.y << " " << b.z << '\n';

	return 0;
}