#include <iostream>

using namespace std;

int main(void)
{
	int N, cnt = 0;
	cin >> N;
	int tmp = N * -1;

	for (int i = 31; i >= 0; i--) {
		if ((N&(1 << i)) != (tmp&(1 << i))) {
			cnt++;
		}
		
	}
	cout << cnt;
	return 0;
}