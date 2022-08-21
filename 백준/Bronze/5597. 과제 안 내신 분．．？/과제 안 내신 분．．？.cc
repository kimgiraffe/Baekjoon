#include <iostream>
#include <algorithm>

using namespace std;

int a[29];
bool n[31];

int main(void)
{
	for (int i = 1; i < 31; i++) {
		n[i] = false;
	}

	for (int i = 1; i <= 28; i++) {
		cin >> a[i];
		for (int j = 1; j < 31; j++) {
			if (a[i] == j) {
				n[j] = true;
			}
		}
	}


	for (int i = 1; i < 31; i++) {
		if (n[i] == false) {
			cout << i << "\n";
		}
	}

	return 0;
}