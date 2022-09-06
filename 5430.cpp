#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// freopen("input.txt", "r", stdin);
	int T;
	cin >> T;
	for (int i = 1; i <= T; ++i) {
		deque<int> dq;
		bool reverse = false, error = false;
		string p, str, s = "";
		int n;
		cin >> p;
		cin >> n;
		cin >> str;
		int len = str.length();
		for (int j = 0; j < len; ++j) {
			if (isdigit(str[j])) {	//Non-zero value if the character is a numeric character, zero otherwise.
				s += str[j];
			}
			else {
				if (!s.empty()) {
					dq.push_back(stoi(s));
					s = "";
				}
			}
		}

		for (auto order : p) {
			if (order == 'R') {
				if (reverse)
					reverse = false;
				else
					reverse = true;
			}
			else {
				if (dq.empty()) {
					cout << "error\n";
					error = true;	
					break;
				}
				if (reverse)
					dq.pop_back();
				else
					dq.pop_front();
			}
		}

		if (!error) {
			cout << '[';
		}
		if (reverse && !dq.empty()) {
			for (auto order = dq.rbegin(); order != dq.rend(); ++order) {
				if (order == dq.rend() - 1)
					cout << *order;
				else
					cout << *order << ',';
			}
		}
		else if (!reverse && !dq.empty()) {
			for (auto order = dq.begin(); order != dq.end(); ++order) {
				if (order == dq.end() - 1)
					cout << *order;
				else
					cout << *order << ',';
			}
		}
		if (!error) {
			cout << ']' << '\n';
		}
		
	}


	return 0;
}