#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, K, cnt = 0;
	cin >> A >> K;

	while (A != K) {
		cnt++;
		if (K % 2 == 0 && K / 2 >= A) {
			K /= 2;
		}
		else {
			K--;
		}
	}

	cout << cnt;

	return 0;
}