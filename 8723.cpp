#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N[3];
	for (int i = 0; i < 3; ++i) {
		cin >> N[i];
	}
	sort(N, N + 3);

	if (N[0] * N[0] + N[1] * N[1] == N[2] * N[2]) {
		cout << "1";
	}
	else if (N[0] == N[1] && N[1] == N[2]) {
		cout << "2";
	}
	else {
		cout << "0";
	}

	return 0;
}