#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		bool flag = true;
		char c1[101], c2[101];
		scanf("%s %s", c1, c2);
		char visited1[26] = { 0, };
		char visited2[26] = { 0, };
		int len1 = strlen(c1), len2 = strlen(c2);
		if (len1 != len2) {
			flag = false;
		}
		else {
			for (int j = 0; j < len1; j++) {
				visited1[c1[j] - 'a']++;
				visited2[c2[j] - 'a']++;
			}
			for (int k = 0; k < 26; k++) {
				if (visited1[k] != visited2[k]) {
					flag = false;
					break;
				}
			}
		}

		if (flag == true) {
			printf("%s & %s are anagrams.\n", c1, c2);
		}
		else {
			printf("%s & %s are NOT anagrams.\n", c1, c2);
		}
	}

	return 0;
}