#include <iostream>

using namespace std;

int main(void)
{
	int A[5], sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> A[i];
		sum += A[i];
	}
	cout << sum;

	return 0;
}