#include <iostream>

using namespace std;

int main(void)
{
	char c;
	cin >> c;
	if (c == 'N' || c == 'n') {
		cout << "Naver D2\n";
	}
	else {
		cout << "Naver Whale\n";
	}

	return 0;
}