#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n, cnt = 1;
	cin >> n;
	while (n--) {
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr + 3);

		cout << "Scenario #" << cnt << ":" << '\n';
		if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
			cout << "yes" << '\n' << '\n';
		else
			cout << "no" << '\n' << '\n';

		cnt++;
	}

	return 0;
}