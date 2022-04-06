#include <iostream>

using namespace std;

void calc(int h1, int m1, int s1, int h2, int m2, int s2)
{
	int t = (h2 * 3600 + m2 * 60 + s2) - (h1 * 3600 + m1 * 60 + s1);
	int h = t / 3600;
	int m = (t - h * 3600) / 60;
	int s = t % 60;

	cout << h << " " << m << " " << s << '\n';
}

int main(void)
{
	int a_h1, a_m1, a_s1, a_h2, a_m2, a_s2, b_h1, b_m1, b_s1, b_h2, b_m2, b_s2, c_h1, c_m1, c_s1, c_h2, c_m2, c_s2;
	cin >> a_h1 >> a_m1 >> a_s1 >> a_h2 >> a_m2 >> a_s2;
	cin >> b_h1 >> b_m1 >> b_s1 >> b_h2 >> b_m2 >> b_s2;
	cin >> c_h1 >> c_m1 >> c_s1 >> c_h2 >> c_m2 >> c_s2;
	
	calc(a_h1, a_m1, a_s1, a_h2, a_m2, a_s2);
	calc(b_h1, b_m1, b_s1, b_h2, b_m2, b_s2);
	calc(c_h1, c_m1, c_s1, c_h2, c_m2, c_s2);

	return 0;
}