#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int L, P, V, case_num = 0;
	while (true) {
		cin >> L >> P >> V;
		if (L == 0 && P == 0 && V == 0)
			break;
		case_num++;
		cout << "Case " << case_num << ": " << (V / P)* L + min(V % P, L) << '\n';
	}

	return 0;
}