#include "Header.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
const char* oct = "01234567";
void swap(char* s) {
	char tmp;
	int j = strlen(s) - 1;
	for (int i = 0; i < j; ++i, --j) {
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
char* ltoab(long num, char* c) {
	char s[256] = {};
	for (int i = 0; i < (sizeof(num) * 9-1); ++i) {
		if ((num & 1 <<(sizeof(num) * 9 - i - 2)) != 0) {
			c[i] = '1';
		}
		else {
			c[i] = '0';
		}
	}
	int n = 0;
	swap(c);
	for (int i = 0; i < (sizeof(num) * 9-1); i += 3) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			int a = 0;
			long in = c[i + j] - '0';
			a = in * pow(2, j);
			sum += a;
		}
		s[n] = oct[sum];
		n++;

	}
	swap(s);
	for (int i = 0; i < (sizeof(num) * 9); ++i) {
	c[i] = s[i];
		}
	return c;
}