#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// B=N�� ��, 17N = B + 16B(=A)
	string A, B;
	cin >> B;
	// ����� ���Ǹ� ���� ���� ���� �ڸ��� LSB�� �����
	reverse(B.begin(), B.end());
	A = "0000" + B;

	bool carry = false;
	int i;
	// B�� length��ŭ ���
	for (i = 0; i<B.size(); i++) {
		int val = A[i] - '0' + B[i] - '0' + carry;
		if (val >= 2) {
			val -= 2;
			carry = true;
		}
		else carry = false;
		A[i] = val + '0';
	}
	// B�� ������ �Ѿ�� A�� 4�ڸ� ���
	for (; i<A.size(); i++) {
		int val = A[i] - '0' + carry;
		if (val == 2) {
			val = 0;
			carry = true;
		}
		else carry = false;
		A[i] = val + '0';
	}
	// ������ �ڸ����� carry �߻��� ó��
	if (carry) A.push_back('1');

	// �ٽ� ���� ������ �ڸ��� LSB�� ���߰� ���
	reverse(A.begin(), A.end());
	cout << A << endl;
}

