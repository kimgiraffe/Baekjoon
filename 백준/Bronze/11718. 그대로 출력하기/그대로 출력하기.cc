#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	while (true) {
		getline(cin, str);
		if (str == "")
			return 0;
		cout << str << '\n';
	}


	return 0;
}