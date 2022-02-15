#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		if (str[str.size() - 1] % 2 == 0) {
			cout << "even" << '\n';
		}
		else {
			cout << "odd" << '\n';
		}
	}

	return 0;
}