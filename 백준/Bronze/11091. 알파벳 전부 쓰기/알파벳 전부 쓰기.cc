#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int test;
	cin >> test;
	cin.ignore();

	for (int i = 0; i < test; i++) {

		string str;
		getline(cin, str);

		transform(str.begin(), str.end(), str.begin(), ::towlower);

		int arr[26] = { 0 };
		int cnt = 0;
		int len = str.length();

		for (int i = 0; i < len; i++) {
			cnt = str[i] - 97;
			arr[cnt]++;
		}

		int cnt1 = 0;

		for (int i = 0; i < 26; i++) {
			if (arr[i] != 0) {
				cnt1++;
			}
		}

		if (cnt1 == 26) {
			cout << "pangram\n";
		}
		else {
			cout << "missing ";
			for (int i = 0; i < 26; i++) {
				if (arr[i] == 0) {
					cout << char(i + 97);
				}
			}
			cout << "\n";
		}
	}

	return 0;
}