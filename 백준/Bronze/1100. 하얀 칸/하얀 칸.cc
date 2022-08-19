#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int cnt = 0;
char board[8][8];

int main(void)
{
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && board[i][j] == 'F') {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}