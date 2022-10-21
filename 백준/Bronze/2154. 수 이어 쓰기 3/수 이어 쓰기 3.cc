#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	string subs = to_string(N);

	string str = "";
	for (int i = 1; i <= N; ++i) {
		str += to_string(i);
	}

	size_t found = str.find(subs);
	cout << found + 1;
	return 0;
}