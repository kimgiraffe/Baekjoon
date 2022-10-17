#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long sum = 0;
	string A, B;
	cin >> A >> B;
	for (int i = 0; i < A.length(); ++i) {
		for (int j = 0; j < B.length(); ++j) {
			sum += (A[i] - '0') * (B[j] - '0');
		}
	}

	cout << sum;

	return 0;
}