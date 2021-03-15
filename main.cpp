#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstring>
#include "Header.h"

int main() {
	long num;
	std::cin >> num;
	std::string s[256];
	ltoao(num, *s);
	for (int i = 0; i < (sizeof(s) / sizeof(s[1])); ++i) {
		std::cout << s[i];
	}
}