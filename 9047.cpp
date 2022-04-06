#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	int T;
	string str;
	cin >> T;
	while (T--) {
		int cnt = 0;
		cin >> str;
		
		while(true) {
			if (str == "6174") {
				cout << cnt << '\n';
				break;
			}
			
			sort(str.begin(), str.end(), greater<char>());
			int n1 = stoi(str);
			sort(str.begin(), str.end(), less<char>());
			int n2 = stoi(str);
			str = to_string(n1 - n2);
			
			if (str.size() != 4) {
				if (str.size() == 1) {
					str = str + "000";
				}
				else if (str.size() == 2) {
					str = str + "00";
				}
				else if (str.size() == 3) {
					str = str + "0";
				}
			}
			cnt++;
		}
		
	}

	return 0;
}