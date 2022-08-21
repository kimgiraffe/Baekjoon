#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int p[3], sum = 0;
	for (int i = 0; i < 3; i++) {
		cin >> p[i];
		sum += p[i];

	}

	if (sum < 100) {
		if (p[0] < p[1] && p[0] < p[2]) {
			cout << "Soongsil";
		}
		else if (p[1] < p[2] && p[1] < p[0]) {
			cout << "Korea";
		}
		else {
			cout << "Hanyang";
		}
	}
	else {
		cout << "OK";
	}
	
	return 0;
}