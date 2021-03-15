#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <string>
#include "Header.h"
int main() {
	long num;
	std::cin >> num;
	std::string s;
	ltoao(num, s);
	std::cout << s;
}
