#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	char s[3];
	cin >> s;
	if (strcmp(s, "A+") == 0) {
		cout << "4.3" << '\n';
	}
	else if (strcmp(s, "A0") == 0) {
		cout << "4.0" << '\n';
	}
	else if (strcmp(s, "A-") == 0) {
		cout << "3.7" << '\n';
	}
	else if (strcmp(s, "B+") == 0) {
		cout << "3.3" << '\n';
	}
	else if (strcmp(s, "B0") == 0) {
		cout << "3.0" << '\n';
	}
	else if (strcmp(s, "B-") == 0) {
		cout << "2.7" << '\n';
	}
	else if (strcmp(s, "C+") == 0) {
		cout << "2.3" << '\n';
	}
	else if (strcmp(s, "C0") == 0) {
		cout << "2.0" << '\n';
	}
	else if (strcmp(s, "C-") == 0) {
		cout << "1.7" << '\n';
	}
	else if (strcmp(s, "D+") == 0) {
		cout << "1.3" << '\n';
	}
	else if (strcmp(s, "D0") == 0) {
		cout << "1.0" << '\n';
	}
	else if (strcmp(s, "D-") == 0) {
		cout << "0.7" << '\n';
	}
	else if (strcmp(s, "F") == 0) {
		cout << "0.0" << '\n';
	}

	return 0;
}