#include <iostream>

using namespace std;

int main(void)
{
	int ans = 0;
	int Ca, Ba, Pa;
	int Cr, Br, Pr;
	cin >> Ca >> Ba >> Pa >> Cr >> Br >> Pr;
	if (Ca < Cr) {
		ans += (Cr - Ca);
	}
	if (Ba < Br) {
		ans += (Br - Ba);
	}
	if (Pa < Pr) {
		ans += (Pr - Pa);
	}

	cout << ans;

	return 0;
}