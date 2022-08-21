#include <iostream>
#include <vector>

using namespace std;

const long long mod = 1000000000;
typedef vector<vector<long long>> mat;

mat operator * (mat a, mat b)
{
	mat ret(2, vector<long long>(2));

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			long long sum = 0;
			for (int m = 0; m < 2; m++) {
				sum += ((a[i][m] % mod)) *((b[m][j] % mod)) % mod;
			}
			ret[i][j] = sum % mod;
		}
	}
	return ret;
}

mat calc(mat a, long long b)
{
	if (b == 0) {
		mat ret(2, vector<long long>(2));
		ret[0][0] = 1, ret[0][1] = 0, ret[1][0] = 0, ret[1][1] = 1;
		return ret;
	}
	else if (b % 2 == 0) {
		mat tmp = calc(a, b / 2);
		return tmp * tmp;
	}
	else {
		mat tmp = calc(a, b - 1);
		return a * tmp;
	}
}

int main(void)
{
	long long a, b, res = 0;
	cin >> a >> b;
	mat F(2, vector<long long>(2));
	F[0][0] = 1, F[0][1] = 1, F[1][0] = 1, F[1][1] = 0;
	mat B = calc(F, b + 2);
	mat A = calc(F, (a - 1) + 2);
	res = ((B[0][1] - 1) % mod - (A[0][1] - 1) % mod + mod) % mod;

	cout << res;

	return 0;
}