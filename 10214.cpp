#include <iostream>
using namespace std;
int main() {
	int T, Y[9], K[9], Ysum = 0, Ksum = 0;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> Y[j] >> K[j];
			Ysum += Y[j];
			Ksum += K[j];
		}
		if (Ysum > Ksum)
		{
			cout << "Yonsei" << '\n';
		}
		else if (Ysum == Ksum)
		{
			cout << "Draw" << '\n';
		}
		else if (Ysum < Ksum)
		{
			cout << "Korea" << '\n';
		}
		Ysum = 0;
		Ksum = 0;
	}
}
