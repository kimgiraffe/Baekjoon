#include <iostream>
#include <string>
#include <vector>

using namespace std;

void toBinary(int H, int M, int S)
{
	vector<int> v1, v2, v3;
	for (int i = 5; i >= 0; --i) {
		int tmp = H >> i & 1;
		v1.push_back(tmp);
	}

	for (int i = 5; i >= 0; --i) {
		int tmp = M >> i & 1;
		v2.push_back(tmp);
	}

	for (int i = 5; i >= 0; --i) {
		int tmp = S >> i & 1;
		v3.push_back(tmp);
	}

	for (int idx = 0; idx < 6; ++idx) {
		cout << v1[idx] << v2[idx] << v3[idx];
	}
	cout << ' ';
	
	for (int idx = 0; idx <6; ++idx) {
		cout << v1[idx];
	}

	for (int idx = 0; idx < 6; ++idx) {
		cout << v2[idx];
	}

	for (int idx = 0; idx < 6; ++idx) {
		cout << v3[idx];
	}
	cout << '\n';
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		int h = (str[0] - '0') * 10 + (str[1] - '0');
		int m = (str[3] - '0') * 10 + (str[4] - '0');
		int s = (str[6] - '0') * 10 + (str[7] - '0');
		toBinary(h, m, s);
		
	}

	return 0;
}