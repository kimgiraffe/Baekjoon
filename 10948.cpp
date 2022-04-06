#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include <time.h>

using namespace std;

int main(void)
{
	int num[45] = {};
	for (int i = 0; i < 45; i++) {
		num[i] = i + 1;
	}
	srand((unsigned int)time(0));

	int idx1, idx2, tmp;

	for (int i = 0; i < 100; i++) {
		idx1 = rand() % 45;
		idx2 = rand() % 45;
		tmp = num[idx1];
		num[idx1] = num[idx2];
		num[idx2] = tmp;
	}
	sort(num, num + 6);
	for (int i = 0; i < 6; i++) {
		cout << num[i] << " ";
	}

	return 0;
}