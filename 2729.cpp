#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		string a, b; cin >> a >> b;
		if (b.size() > a.size()) swap(a, b);
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());

		string ans;
		int carry = 0;
		for (int i = 0; i < b.size(); i++) {
			int sum = (a[i] - '0') + (b[i] - '0') + carry;
			if (sum > 1) carry = 1;
			else carry = 0;
			ans.push_back((sum % 2) + '0');
		}
		for (int i = b.size(); i < a.size(); i++) {
			int sum = (a[i] - '0') + carry;
			if (sum > 1) carry = 1;
			else carry = 0;
			ans.push_back((sum % 2) + '0');
		}

		if (carry) ans.push_back('1');
		reverse(ans.begin(), ans.end());

		bool flag = false;
		for (auto &c : ans) {
			if (c == '1') flag = true;
			if (flag) cout << c;
		}
		if (!flag) cout << '0';
		cout << "\n";
	}
}