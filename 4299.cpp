#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int A, B;
	cin >> A >> B;
	if ((A + B) % 2 == 0 && (A-B)%2==0 && A >= B) {
		cout << (A + B) / 2 << " " <<  (A - B) / 2;
	}
	else {
		cout << "-1";
	}

	return 0;
}