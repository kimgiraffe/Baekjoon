#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(void)
{
	int K, D, A;
	scanf("%d/%d/%d", &K, &D, &A);
	

	if (K + A < D || D == 0) {
		cout << "hasu";
	}
	else {
		cout << "gosu";
	}

	return 0;
}