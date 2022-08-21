#include <iostream>

using namespace std;

int b[5][5];
void func(int call)
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (call == b[i][j]) {
				b[i][j] = 0;
				return;
			}
		}
	}
}

bool bingo()
{
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += b[i][j];
		}
		if (sum == 0)
			cnt++;
	}
	for (int i = 0; i < 5; i++) {
		int sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += b[j][i];
		}
		if (sum == 0)
			cnt++;
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += b[i][i];
	if (sum == 0) cnt++;

	sum = 0;
	for (int i = 0; i < 5; i++)
		sum += b[i][5-i-1];
	if (sum == 0) cnt++;

	if (cnt >= 3)
		return true;
	else
		return false;
}
int main(void)
{
	int call;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < 25; i++) {
		cin >> call;
		func(call);
		if (bingo()) {
			cout << i + 1 << '\n';
			break;
		}
	}


	return 0;
}