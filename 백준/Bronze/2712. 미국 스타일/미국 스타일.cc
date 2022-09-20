#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i) {
		double n;
		char str[4];
		cin >> n >> str;
		cout.precision(10);
		if (!strcmp("kg", str)) {
			printf("%.4f lb\n", (2.2046 * n));
		}
		else if (!strcmp("lb", str)) {
			printf("%.4f kg\n", (0.4536 * n));
		}
		else if (!strcmp("l", str)) {
			printf("%.4f g\n", (n * 0.2642));
		}
		else if (!strcmp("g", str)) {
			printf("%.4f l\n", (n * 3.7854));
		}
	}

	return 0;
}