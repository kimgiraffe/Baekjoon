#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

typedef struct {
	string str;
	float f;
	string score;
} S;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	float cgpa = 0.0;	//학점 평균
	float num = 0.0; // 총 과목 수
	
	// freopen("input.txt", "r", stdin);

	S s[20];
	for (int i = 0; i < 20; i++) {
		cin >> s[i].str >> s[i].f >> s[i].score;
		if (s[i].score == "A+") {
			cgpa += s[i].f * 4.5;
			num += s[i].f;
		}
		else if (s[i].score == "A0") {
			cgpa += s[i].f * 4.0;
			num += s[i].f;
		}
		else if (s[i].score == "B+") {
			cgpa += s[i].f * 3.5;
			num += s[i].f;
		}
		else if (s[i].score == "B0") {
			cgpa += s[i].f * 3.0;
			num += s[i].f;
		}
		else if (s[i].score == "C+") {
			cgpa += s[i].f * 2.5;
			num += s[i].f;
		}
		else if (s[i].score == "C0") {
			cgpa += s[i].f * 2.0;
			num += s[i].f;
		}
		else if (s[i].score == "D+") {
			cgpa += s[i].f * 1.5;
			num += s[i].f;
		}
		else if (s[i].score == "D0") {
			cgpa += s[i].f * 1.0;
			num += s[i].f;
		}
		else if (s[i].score == "F") {
			cgpa += s[i].f * 0.0;
			num += s[i].f;
		}
		else {
			continue;
		}
	}
	cout << fixed;
	cout.precision(6);
	cout << cgpa / num;

	return 0;
}