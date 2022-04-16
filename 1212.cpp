#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string str;
	cin >> str;
	int len = str.length();

	if (str[0] == '0') {
		cout << "0";
	}
	else if (str[0] == '1'){
		cout << "1";
	}
	else if (str[0] == '2') {
		cout << "10";
	}
	else if (str[0] == '3') {
		cout << "11";
	}
	else if (str[0] == '4') {
		cout << "100";
	}
	else if (str[0] == '5') {
		cout << "101";
	}
	else if (str[0] == '6') {
		cout << "110";
	}
	else if (str[0] == '7') {
		cout << "111";
	}

	for (int i = 1; i < len; i++) {
		switch(str[i]) {
		case '0':
			cout << "000";
			break;
		case '1' :
			cout << "001";
			break;
		case '2':
			cout << "010";
			break;
		case '3':
			cout << "011";
			break;
		case '4':
			cout << "100";
			break;
		case '5':
			cout << "101";
			break;
		case '6':
			cout << "110";
			break;
		case '7':
			cout << "111";
			break;
	
		}
	}

	return 0;
}