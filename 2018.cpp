#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int tmp = n, cnt = 1, a = 1;
	n--;
	while (n > 0) {
		a++;
		n = n - a;

		if (n%a == 0) {
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}