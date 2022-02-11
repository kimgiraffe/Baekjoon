#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	string str;
	cin >> str;

	int size = str.length();
	vector<string> v;

	for (int i = 0; i < size; i++) {
		v.push_back(str.substr(i, str.length()));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';

	return 0;
}