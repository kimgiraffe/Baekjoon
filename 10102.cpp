#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	int V, cntA = 0, cntB = 0;
	cin >> V;
	string str;
	cin >> str;
	for (int i = 0; i < V; i++) {
		if (str[i] == 'A')
			cntA++;
		else if (str[i] == 'B')
			cntB++;
	}
	if (cntA == cntB) {
		cout << "Tie" << '\n';
	}
	else {
		if (cntA > cntB) {
			cout << "A" << '\n';
		}
		else {
			cout << "B" << '\n';
		}
	}

	return 0;
}