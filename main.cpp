#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "Header.h"

int main() {
	long num;
	scanf("%ld", &num);
	char s[256] = {};
	ltoab(num, s);
	for (int i = 0; i < (sizeof(s) / sizeof(s[1])); ++i) {
		printf("%c", s[i]);
	}
}