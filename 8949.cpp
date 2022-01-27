#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <int> res;

int main(void)
{
	string A, B;

	cin >> A >> B;
	int i = A.size(), j = B.size();

	for (; i >= 0 && j >= 0; i--, j--) {
		int a = A[i] - '0';
		int b = B[j] - '0';
		res.push_back(a + b);
	}

	while (i >= 0)
		res.push_back(A[i--] - '0');
	while (j >= 0)
		res.push_back(B[j--] - '0');

	for (int i = res.size() - 1; i > 0; i--) {
		cout << res[i];
	}
	return 0;
}