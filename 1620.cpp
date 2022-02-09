#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	unordered_map<int, string> mis;
	unordered_map<string, int> msi;

	for (int i = 1; i <= N; i++) {
		string name;
		cin >> name;
		mis[i] = name;
		msi[name] = i;
	}

	while (M--) {
		string str;
		cin >> str;
		if ('0' <= str[0] && str[0] <= '9')
			cout << mis[stoi(str)] << '\n';
		else
			cout << msi[str] << '\n';
	}

	return 0;
}