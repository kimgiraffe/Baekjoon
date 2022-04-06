#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <iostream>

using namespace std;

int main(void)
{
	struct tm* t;
	time_t base = time(NULL);

	t = localtime(&base);

	cout << t->tm_year+1900 << '\n' << t->tm_mon+1 << '\n' << t->tm_mday;
	return 0;
}