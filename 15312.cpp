#include <iostream>
#include <vector>
#include <string>

using namespace std;

int stroke[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string A, B;
	cin >> A >> B;

	vector<int> couple;
	int lenA = A.size();
	for (int i = 0; i < lenA; i++)
	{
		couple.push_back(stroke[A[i] - 'A']);
		couple.push_back(stroke[B[i] - 'A']);
	}

	while (1)
	{
		vector<int> temp;

		for (int i = 0; i < couple.size() - 1; i++)
			temp.push_back((couple[i] + couple[i + 1]) % 10);
		couple = temp;

		if (couple.size() == 2)
			break;
	}

	cout << couple[0] << couple[1];

	return 0;
}
