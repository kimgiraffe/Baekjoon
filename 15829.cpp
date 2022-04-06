#include <iostream>
#include <string>
using namespace std;

const int MOD = 1234567891;
const int MUL = 31;

int main(void)
{
	int L;
	cin >> L;

	string S;
	cin >> S;
	long long sum = 0;
	long long R = 1;
	for (int i = 0; i < S.length(); i++) {
		sum = (sum + (S[i] - 'a' + 1)*R) % MOD;
		R = (R*MUL) % MOD;
	}

	cout << sum;

	return 0;
}