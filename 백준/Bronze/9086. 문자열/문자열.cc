#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	int T;
	cin >> T;
	while (T--) {
		cin >> str;
		cout << str[0] << str[str.size()-1] << "\n";	
	}

	return 0;
}