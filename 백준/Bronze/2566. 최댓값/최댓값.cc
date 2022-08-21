#include <iostream>
#include <algorithm>

using namespace std;

int arr[9][9];

int main(void)
{
	int MAX = 0;
	int x1 = 1, y1 = 1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			MAX = max(MAX, arr[i][j]);
		}
	}
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (MAX == arr[i][j])
				x1 = i + 1, y1 = j + 1;
		}
	}

	cout << MAX << "\n" << x1 << " " << y1;

	return 0;
}