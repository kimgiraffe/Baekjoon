#include <iostream>
#include <math.h>

using namespace std;

int arr[21];

int main(void)
{
	int A, B, m, x, t = 0;
	cin >> A >> B;
	cin >> m;	
	for (int i = m-1; i >= 0; i--) {
		cin >> x;
		t += x * pow(A, i);

	}
	
	int i = 0;
	while (true) {
		if (pow(B, i) >= t) {
			break;
		}
		i++;
	}
	
	for (int j = 0; j < i; j++) {
		arr[j] = t % B;
		t /= B;
	}

	for (int j = i - 1; j >= 0; j--) {
		cout << arr[j] << " ";
	}
	return 0;
}