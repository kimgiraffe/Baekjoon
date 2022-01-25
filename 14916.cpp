#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int count = 0;
	while (!(n % 5 == 0 || n <= 0)) {
		n -= 2;
		count++;
	}
	if (n < 0) {
		cout << "-1";
		return 0;
	}
	cout << n / 5 + count;	
	return 0;
}