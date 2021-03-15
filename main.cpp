#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string>
#include "Header.h"

int main() {
	long num;
	scanf("%ld", &num);
	std::string s[256] ;
	ltoao(num, &s);
	for (int i = 0; i < (sizeof(s) / sizeof(s[1])); ++i) {
		printf("%c", s[i]);
	}
}