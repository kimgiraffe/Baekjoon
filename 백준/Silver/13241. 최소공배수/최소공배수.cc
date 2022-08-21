#include <iostream>

using namespace std;

void swap(long long int a, long long int b)
{

	long long int tmp = a;
	a = b;
	b = tmp;	
}

long long int GCD(long long int n1, long long int n2)
{
	return n2 ? GCD(n2, n1%n2) : n1;
}

int main(void)
{
	long long int A, B, gcd;
	cin >> A >> B;
	if (A < B) {
		swap(A, B);
	}
	gcd = GCD(A, B);
	cout << A * B / gcd;

	return 0;
}